#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n, m;
	    cin >> n >> m;
	    int a[501][501] = {};
	    for (int i = 1; i <= n; ++i) {
	        for (int j = 1; j <= m; ++j) {
	            cin >> a[i][j];
	        }
	    }
	
	    int ans = 0;
	    int f[501][501] = {};
	    for (int i = 1; i <= n; ++i) {
	        for (int j = 1; j <= m; ++j) {
	            if (a[i][j] == 0)
	                f[i][j] = 0;
	            else
	                f[i][j] = min({f[i - 1][j], f[i][j - 1], f[i - 1][j - 1]}) + 1;
	            ans = max(ans, f[i][j]);
	        }
	    }
	    cout << ans << endl;
	}
}