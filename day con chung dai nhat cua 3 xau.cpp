#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	cin.ignore();
	while(test--){
		int n,m,p; cin >> n >> m >> p;
		string a,b,c;
		cin >> a >> b >> c;
		int dp[n+5][m+5][p+5] ={};
		for(int i = 0; i<=n; i++){
			for(int j =0; j <=m; j++){
				for(int k =0; k <=p ;k++){
					if(i==0 || j==0|| k==0){
						dp[i][j][k] = 0;
					}
					else if(a[i-1] == b[j-1] && a[i-1] == c[k-1]){
						dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
					}
					else {
						dp[i][j][k] = max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
					}
				}
			}
		}
		cout << dp[n][m][p] << endl;
	}
}