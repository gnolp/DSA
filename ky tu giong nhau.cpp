#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int x,y,z; cin >> x >> y >> z;
		long long dp[n+5];
		dp[1] = x;
		for(int i = 2; i<= n; i++){

			if(i%2==1){
				dp[i] = min(dp[i-1]+x,dp[i/2+ 1]  + z + y);

			}
			else{
				dp[i] = min(dp[i-1]+x,dp[i/2] + z);

			}

		}

		cout << dp[n] << endl;
	}
}