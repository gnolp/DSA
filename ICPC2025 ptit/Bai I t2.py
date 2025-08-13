import math
def main():
    a,b,k = map(int, input().split())
    result = []
    while a > 0 and b > 0:
        cnt = math.comb(a + b - 1, a - 1)
        if k <= cnt:
            result.append('a')
            a -= 1
        else:
            result.append('b')
            k -= cnt
            b -= 1
    result.extend(['a'] * a)
    result.extend(['b'] * b)
    print(''.join(result))
if __name__ == "__main__":
    main()