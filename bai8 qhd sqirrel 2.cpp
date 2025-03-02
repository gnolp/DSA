#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k; cin >> n >>k;
	int a[n];
	for(int &x:a) cin >> x;
	long long dp[n];
	dp[0] = 0;
	for(int i = 1; i<n; i++){
		dp[i]=1e18;
		for(int j = (i-k>=0? i-k:0); j<i; j++){
			dp[i] = min(dp[j]+abs(a[i]-a[j]),dp[i]);
		}
	}
	cout << dp[n-1] << endl;
}