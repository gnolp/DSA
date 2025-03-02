#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		pair<float,float> a[n];
		for(int i =0; i<n; i++){
			cin >> a[i].first >> a[i].second;
		}
		int dp[n];
		for(int i =0; i<n; i++) dp[i] = 1;
		int ans = -1;
		for(int i =0; i<n; i++){
			for(int j =0; j<i ;j++){
				if(a[i].first > a[j].first and a[i].second < a[j].second){
					dp[i] = max(dp[i],dp[j]+1);
				}
			}
			ans = max(dp[i],ans);
		}
		cout << ans << endl;
	}
}