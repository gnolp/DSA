#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n];
		for(int &x:a) cin >> x;
		long long dp[n]; // co lay a[i] hay khong
		memset(dp,0,sizeof(dp));
		dp[0] = a[0];
		dp[1] = (a[1]>a[0]?a[1]:a[0]);
		for(int i = 2; i <n; i++){
			dp[i] = max(dp[i-2]+a[i],dp[i-1]);
		}
		cout << dp[n-1] << endl;
	}
}