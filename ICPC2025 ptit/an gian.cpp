#include<bits/stdc++.h>

using namespace std;
long long MOD = 1e9+9;
int main(){
	int n,m,K; cin >> n >> m >> K;
	vector<int> a(n),b(m);
	for(int i =0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<m; i++){
		cin >> b[i];
	} 
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	int dp[n+1][m+1][K+1] ={};
	for(int i =0; i<=n; i++){
		for(int j = 0; j<=m; j++){
			dp[i][j][0] = 1;
		}
	}
	for(int i =1; i<=n; i++){
		for(int j = 1; j<=m; j++){
			for(int k = 1; k<=K; k++){
				dp[i][j][k] = ((dp[i-1][j][k] + dp[i][j-1][k])%MOD - dp[i-1][j-1][k]+MOD) % MOD;
				if(a[i-1] > b[j-1]){
					dp[i][j][k] = (dp[i][j][k] + dp[i-1][j-1][k-1])%MOD;
				}
			}
		}
	}
	cout << dp[n][m][K];
}