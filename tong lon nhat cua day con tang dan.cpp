#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n];
		int dp[n];
		for(int i = 0 ; i <n; i++){
			cin >> a[i];
			dp[i] = a[i];
		}
		int m = dp[0];
		for(int i = 1; i < n; i++){
			for(int j = 0; j < i ;j++){
				if(a[j] < a[i]){
					dp[i] = max(dp[j]+a[i],dp[i]);
				}
			}
//			cout << dp[i]  <<" ";
			m = max(m,dp[i]);
		}
//		cout << endl;
		cout << m << endl;
	}
}