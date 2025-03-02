#include "bits/stdc++.h"
// @JASPER'S BOILERPLATE
using namespace std;
using ll = long long;

#ifdef JASPER
#include "debug.h"
#else
#define debug(...) 166
#endif

const int N = 1e5 + 5;
const int M = 1e2 + 5;
const int MOD = 1e9 + 7;

int n, m;
int a[N];

int dp[N][M];
// dp(i, j) : tong so cach xay dung mang tu 1..i voi a(i) = j
signed main() {
    cin.tie(0) -> sync_with_stdio(0);
    
 //   #ifdef JASPER
//        freopen("in1", "r", stdin);
 //   #endif

    cin >> n >> m;
    for (int i = 1; i <= n; ++i) cin >> a[i];

    // TH CS
    if (a[1] == 0) for (int x = 1; x <= m; ++x) dp[1][x] = 1;
    else dp[1][a[1]] = 1;
    
    for (int i = 2; i <= n; ++i) {
        if (a[i] == 0) {
            for (int x = 1; x <= m; ++x) {
                for (int k : {-1, 0, 1}) {
                    int y = x - k;
                    if (y >= 0)
                        dp[i][x] = (dp[i][x] + dp[i - 1][y]) % MOD;
                }
            }

        }
        else {
            for (int k : {-1, 0, 1}) {
                int x = a[i];
                int y = a[i] - k;
                if (y >= 0)
                    dp[i][x] = (dp[i][x] + dp[i - 1][y]) % MOD;
            }
        }
    }


    ll ans = 0;
    for (int x = 1; x <= m; ++x) ans = (ans + dp[n][x]) % MOD;
        
    cout << ans << "\n";
}

