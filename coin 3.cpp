#include<bits/stdc++.h>

using namespace std;
int mod = 1e9+7;
int main(){
	int n,s; cin >> n>> s;
	int a[n];
	for(int i =0;i<n; i++) cin >> a[i];
	int dp[s+5]={};
	dp[0] = 1;
	for(int i =0; i<n; i++){
		for(int j = 1; j<=s; j++){
			if(j >= a[i]){
				dp[j] = (dp[j] %mod + dp[j-a[i]]%mod)%mod;
			}
		}
	}
	cout << dp[s];
}