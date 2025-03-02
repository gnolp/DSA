#include<bits/stdc++.h>

using namespace std;
const int mod = 1e9+7;


int main(){
	int n; cin >> n;
	int dp[n+1]={};
	dp[0] = 1;
	for(int x = 1; x <=n;x++){
		for(int i = 1; i<=6; i++){
			if(x>=i)
			dp[x] =(dp[x]+ dp[x-i])%mod;
		}
	}
	cout << dp[n];
}