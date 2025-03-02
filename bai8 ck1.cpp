#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,M;
	cin >> n >> M;
	int w[n];
	int v[n];
	for(int i =0; i<n; i++){
		cin >> w[i] >> v[i];
	}
	int dp[M+5]={};
	int ans = -1;
	for(int i = 0; i<n; i++){
		for(int j = M ; j >= w[i]; j--){
				dp[j] = max(dp[j],dp[j-w[i]] + v[i]);
				ans = max(ans,dp[j]);
		}
	}
	cout << ans << endl;
}