#include<bits/stdc++.h>

using namespace std;
int mod = 1e9+7;
int main(){
	int n; cin >> n;
	int s = n*(n+1) / 2;
	if(s%2 ==1){
		cout << 0 << endl;
	}
	else{
		s /= 2;
		int dp[s+5]={};
		dp[0] = 1;
		for(int i = 1; i <=n; i++){
			for(int x = s; x>= i; x--){
				dp[x] = (dp[x]+dp[x-i])%mod;
			}
		}
		cout << (1LL*dp[s] * 500000004)%mod << endl;
	}
}