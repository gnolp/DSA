#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n+5][n+5];
	for(int i = 1; i<=n ;i++){
		for(int j=1; j<=n; j++){
			cin >> a[i][j];
		}
	}
	int dp[n+5][n+5];
	memset(dp,0,sizeof(dp));
	for(int i = 1; i<=n; i++){
		for(int j = 1; j <=n; j++){
			dp[i][j] = max(dp[i-1][j-1],max(dp[i-1][j],dp[i-1][j+1])) + a[i][j];
		}
	}
	int m = -1;
	for(int i = 1; i <=n; i++){
		m = max(m,dp[n][i]);
	}
	cout << m << endl;
}