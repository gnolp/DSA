#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		long long dp[n];
		dp[0] = a[0];
		dp[1] = max(a[1],a[0]);
		for(int i = 2; i <n; i++){
			dp[i] = max(dp[i-2]+a[i],dp[i-1]);
		}
		cout << dp[n-1] << endl;
	}
}