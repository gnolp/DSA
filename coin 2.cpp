#include<bits/stdc++.h>

using namespace std;
const int mod= 1e9+7;
int main(){
	int n,s; cin >> n >> s;
	int a[n];
	for(int i = 0; i <n; i++) cin >> a[i];
	int dp[s+5]={};
	dp[0] = 1;
	for(int x= 1; x<= s; x++){
		for(int i=0; i<n; i++){
			if(x>=a[i]){
				dp[x] = (dp[x]+dp[x-a[i]])%mod;
			}
		}
	}
	cout << dp[s];
}