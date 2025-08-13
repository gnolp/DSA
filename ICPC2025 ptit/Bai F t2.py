def main():
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    sum_a = sum(a)
    v = sum(b)
    INF = float('inf')
    dp = [(INF,-1)] * (v + 1)
    dp[0] = (0, 0)
    for i in range(n):
        for j in range(v, a[i] - 1, -1):
            if dp[j - b[i]][0] != INF:
                new_count = dp[j - b[i]][0] + 1
                new_save = dp[j - b[i]][1] + a[i]
                if new_count < dp[j][0] or (new_count == dp[j][0] and new_save > dp[j][1]):
                    dp[j] = (new_count, new_save)
    # temp = sum_a
    # while(dp[sum_a][0] == INF):
    #     sum_a += 1
    # print(f"{dp[sum_a][0]} {temp - dp[sum_a][1]}")
    ans = -1
    for i in range(sum_a, v + 1):
        if dp[i][0] != INF:
            if ans == -1 or dp[i][0] < dp[ans][0] or (dp[i][0] == dp[ans][0] and dp[i][1] > dp[ans][1]):
                ans = i
    print(f"{dp[ans][0]} {sum_a - dp[ans][1]}")
if __name__ == "__main__":
    main()
