#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		vector<int> dp(n+5,1e9);
		dp[0] = 0;
		for(int i = 1; i<=n; i++){
			for(int j = 1; j<=sqrt(n);j++){
				if(i >= j*j){
					dp[i] = min(dp[i],dp[i-j*j]+1);
				}
			}
		}
 		cout << dp[n] << endl;
	}
}