#include<bits/stdc++.h>

using namespace std;

long long mod = 1e9+7;

int main(){
	int n; cin >> n;
	int k; cin >> k;
	int dp[n+1]={};
	for(int i = 1; i<=k; i++) dp[i] = 1;
	for(int i = 2; i<= n; i++){
		for(int j = (i>=k?i-k:0); j<i; j++){
			dp[i] = dp[i] + dp[j];
			dp[i] %= mod;
		}
	}
	cout << dp[n];
}