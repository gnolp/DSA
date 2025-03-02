#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i<n; i++) cin >> a[i];
	int dp[10005] ={};
	dp[0]  =  1;
	set<int> se;
	se.insert(0);
	for(int i = 0; i < n; i++){
		for(int j = 10000; j >=a[i];j--){
			if(dp[j-a[i]]==1){
				dp[j] = 1;
				se.insert(j);
			}
		}
	}
	for(auto x:se) cout << x <<" ";
}