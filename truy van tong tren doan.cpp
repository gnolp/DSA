#include<bits/stdc++.h>

using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	for(int &x:a) cin >> x;
	long long dp[n+5];
	dp[0] = 0;
	for(int i = 1;i<n; i++){
		dp[i] = dp[i-1]+a[i-1];
	}
	int q; cin >> q;
	int l,r;
	while(q--){
		cin >> l >> r;
		cout << dp[r] - dp[l-1] << endl;
	}
}