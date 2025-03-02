#include<bits/stdc++.h>

using namespace std;

int mod = 1e9+7;

int main(){
	int test; cin >> test;
	int dp[101][10+1]={};
	int ans = 0;
	for(int i = 0; i<=9; i++){
		dp[1][i] = 1;
		ans += 1;
	}
	dp[1][10] = 10;
	for(int i = 2; i<=100; i++){
		for(int j = 1; j<=10; j++){
			if(j==10){
				dp[i][j] = ans;
			}
			else{
				for(int k = j; k>=1; k--){
					dp[i][j] = dp[i][j] + dp[i-1][k];
					dp[i][j] %= mod;
				}
				ans += dp[i][j];
				ans %=mod;
			}
		}
	}
	while(test--){
		int n; cin >> n;
		cout << dp[n][10] << endl;
	}
}