#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n+1][n+1]={};
	for(int i = 1; i <=n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	int m = INT_MIN;
	int dp[n+1][n+1]={};
	for(int i = 1; i <=n; i++){
		for(int j = 1; j <=n; j++){
			dp[j][i] = max(dp[j][i-1]+a[j][i],max(dp[j-1][i-1]+a[j][i],dp[j+1][i-1]+a[j][i]));
		}
	}
	for(int i = 1; i<=n; i++){
		m = max(m,dp[i][n]);
	}
	cout << m;
}