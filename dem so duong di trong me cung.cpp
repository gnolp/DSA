#include <bits/stdc++.h>

#define ll long long

ll mod = 1e9 + 7;

using namespace std;

int main() {
    int n;
    cin >> n;
    char arr[n + 1][n + 1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }
    ll dp[n + 1][n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0][1] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (arr[i][j] == '.') {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                dp[i][j] %= mod;
            } else {
                dp[i][j] = 0;
            }
        }
    }
    cout << dp[n][n];
    return 0;
}
