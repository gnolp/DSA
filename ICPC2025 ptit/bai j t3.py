def main():
    n, c = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    l, r =0, n - 1
    cnt = 0
    cnt2 = 0
    while l < r:
        if a[r] + a[l] <= c:
            cnt += 1
            l += 1
            r -= 1
        else:
            cnt2 += 1
            r -= 1
    print(cnt + cnt2 + (1 if l == r else 0))
if __name__ == "__main__":
    main()