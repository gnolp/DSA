#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	long long a[n];
	for(int i = 0; i < n;i++){
		cin >> a[i];
	}
	long long dp[n];
	dp[0]=0;
	dp[1] = abs(a[0]-a[1]);
	for(int i = 2; i < n; i++){
		long long t1=abs(a[i-2]-a[i]);
		long long t2 = abs(a[i-1]-a[i]);
		dp[i] = min(dp[i-2]+t1,dp[i-1]+t2);
	}
	cout << dp[n-1];
	return 0;
}