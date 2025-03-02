#include<bits/stdc++.h>

using namespace std;
//2 3 7 4 5 9 6
int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n];
		for(int &x:a){
			cin >> x;
		}
		int dp[n];
		for(int i =0; i <n; i++) dp[i] = 1;
		int m = -1;
		for(int i = 1; i <n; i++){
			for(int j =0; j < i; j++){
				if(a[i] >= a[j]){
					dp[i] = max(dp[j]+1,dp[i]);
				}
			}
			m = max(m,dp[i]);
		}
//		cout << m << endl;
		cout << n - m << endl;
	}
}