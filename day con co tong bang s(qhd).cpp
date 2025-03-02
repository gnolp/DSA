#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int s; cin >> s;
	int a[n];
	for(int &x:a) cin >> x;
	int dp[s+5];
	memset(dp,0,sizeof(dp));
//	for(int x:dp) cout << x <<" ";
	dp[0] = 1;
	for(int i = 0; i < n; i++){
		for(int j = s; j>=a[i]; j--){
			if(dp[j]==0 && dp[j-a[i]]==1){
				dp[j] = 1;
//				cout << j << " ";
			}
		}
	}
	cout << dp[s];
}