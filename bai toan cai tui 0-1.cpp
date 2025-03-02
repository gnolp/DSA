#include<bits/stdc++.h>

using namespace std;

int main(){
	int test = 1;
	while(test--){
		int n,v;
		cin >> n >> v;
		int a[n+5],b[n+5];
		for(int i = 1 ;i <=n; i++){
			cin >> a[i] >> b[i];
		}
		int dp[n+5][v+5];
		memset(dp,0,sizeof(dp));
		for(int i = 0 ; i <= n; i++){
			for(int j = 0; j <= v; j++){
				if(i==0||j==0){
					dp[i][j] = 0;
				}
				else{
					dp[i][j] = dp[i-1][j];
					if(j>= a[i]){
						dp[i][j] = max(dp[i][j],dp[i-1][j-a[i]]+b[i]); // cai tui lay do vat thu i = max cua cai tui lay do vat thu i-1, co trong luong con lai la j - a[i] : trang thai truoc do cua cai tui khi chua cho do vat thu i;
					}
				}
			}
		}
		cout << dp[n][v] << endl;
	}
}