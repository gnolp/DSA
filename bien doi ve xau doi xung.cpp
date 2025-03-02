#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		string s; cin >> s;
		int n = s.length();
		s = "@" + s;
		int dp[n+5][n+5]={};
		for(int i = 1; i<=n; i++){
			dp[i][i] = 1;
		}
		for(int i = n-1; i > 0; i--){
			for(int j = i+1; j<=n; j++){
				if(s[i]==s[j]){
					dp[i][j] = dp[i+1][j-1] + 2;
				}
				else{
					dp[i][j] = max(dp[i+1][j],dp[i][j-1]);
				}
			}
		}
		cout << n - dp[1][n] << endl;
	}
}