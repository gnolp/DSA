#include<bits/stdc++.h>

using namespace std;
int dp[505][505];
int solve(int n,int m){
	if(dp[n][m]!=-1) return dp[n][m];
	if(n==m) return 0;
	int ans = 1e9;
	for(int i = 1; i< n; i++){
		ans = min(ans,1+solve(i,m)+solve(n-i,m));
	}
	for(int i = 1; i<m; i++){
		ans = min(ans,1+solve(n,i)+solve(n,m-i));
	}
	dp[n][m] = ans;
	return ans;
}
int main(){
	int a,b; cin >> a>> b;
//	memset(dp,-1,sizeof(dp));
	//cout << solve(a,b);
	memset(dp,0x3f,sizeof(dp));
	for(int i = 1; i <= a; i++){
		for(int j = 1; j<=b; j++){
			if(i==j) dp[i][j] = 0;
			else{
				for(int x = 1; x <= i; x++){
					dp[i][j] = min(dp[i][j],1+dp[x][j]+dp[i-x][j]);
				}
				for(int y = 1; y<=j; y++)
					dp[i][j] = min(dp[i][j],1+dp[i][y]+dp[i][j-y]);
			}
		}
	}
	cout << dp[a][b];
}