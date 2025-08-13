import math
import itertools

def lcm(a, b):
    return a * b // math.gcd(a, b)

def count_removed(x, a):
    n = len(a)
    res = 0
    seen = set()
    for k in range(1, n + 1):
        for comb in itertools.combinations(a, k):
            l = comb[0]
            valid = True
            for i in range(1, k):
                l = lcm(l, comb[i])
                if l > x:
                    valid = False
                    break
            if not valid:
                continue
            if l in seen:
                continue
            seen.add(l)
            if k % 2 == 1:
                res += x // l
            else:
                res -= x // l
    return res

def count_remaining(x, a):
    return x - count_removed(x, a)

def find_k_number(N, K, a):
    low, high = 1, 10**18
    while low < high:
        mid = (low + high) // 2
        if count_remaining(mid, a) < K:
            low = mid + 1
        else:
            high = mid
    return low

def main():
    test = int(input())
    while test > 0:
        test -= 1
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        ans = find_k_number(n, k, a)
        print(ans)
if __name__ == "__main__":
    main()
    