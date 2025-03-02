#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m; cin >> n >> m;
	int a[n+5][m+5];
	for(int i = 1; i <=n; i++){
		for(int j = 1; j <=m; j++){
			cin >> a[i][j];
		}
	}
	long long dp[n+5][m+5];
	memset(dp,0,sizeof(dp));
	for(int i = 1; i <=n; i++){
		for(int j =1; j<=m; j++){
			dp[i][j] = max(dp[i-1][j],dp[i][j-1]) + a[i][j];
		}
	}
	cout << dp[n][m] << endl;
}