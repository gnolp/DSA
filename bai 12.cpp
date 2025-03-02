#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n+1];
	int dp[n+5][n+5];
	for(int i = 1; i <=n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <=n; i++){
		for(int j = 1; j <=n; j++) dp[i][j] = 100;
	}
	int ans = -1;
	for(int i= 1;i<=n; i++){
		for(int j = 1; j <=n-i+1; j++){
			if(j==1) dp[i][j] = a[i];
			else{
				dp[i][j] = min(dp[i][j-1],a[i+j-1]);
				ans = max(ans,j*dp[i][j]);
			}
		}
	}
	
	cout << ans;
	
}