#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x:a) cin >> x;
	int dp[n];
	for(int i =0; i<n; i++) dp[i] = 1;
	int m = -1;
	for(int i =1; i<n; i++){
		for(int j = 0; j <i; j++){
			if(a[i] > a[j]){
				dp[i] = max(dp[i],dp[j]+1);
			}
		}
		m = max(dp[i],m);
	}
	cout << m;
}