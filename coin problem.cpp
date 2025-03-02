#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int s; cin >> s;
	int c[n+1];
	for(int i = 0; i <n; i++) cin >> c[i];
	vector<int> dp(s+5,1e9);
	dp[0] = 0;
	// dp[x]: tong so to tien it nhat tao ra tong = x;
	for(int i = 0; i <n; i++){
		for(int x = c[i]; x<=s; x++){
			dp[x] = min(dp[x],dp[x-c[i]]+1);
		}
	}
	if(dp[s]==1e9) cout << -1;
	else cout << dp[s];
}