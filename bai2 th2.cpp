#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n];
		for(int i =0; i <n; i++){
			cin >> a[i];
		}
		int dp[n]={};
		for(int i =0; i <n; i++) dp[i] = 1;
		stack<int> st;
		st.push(0);
		for(int i = 1; i<n; i++){
			while(!st.empty() && a[i]>= a[st.top()]){
				dp[i] += dp[st.top()];
				st.pop();
			}
			st.push(i);
		}
		for(int i =0; i <n; i++) cout << dp[i] <<" ";
		cout << endl;
	}
}