#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,V; cin >> n >> V;
	int w[n+5],v[n+5];
	for(int i=1;i<=n;i++) cin >> w[i];
	for(int i=1;i<=n; i++) cin >> v[i];
	int dp[n+1][V+1] ={};
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=V; j++){
			dp[i][j] = max(dp[i][j],dp[i-1][j]);
			if(j>=w[i]){
				dp[i][j] = max(dp[i][j],dp[i-1][j-w[i]]+v[i]);
			}
		}
	}
	cout << dp[n][V];
}