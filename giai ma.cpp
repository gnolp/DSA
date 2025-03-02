#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		string s;
		cin >> s;
		s = "." + s;
		int n = s.length();
		int dp[n]={};
		dp[0] = 1;
		if(s[1]=='0'){
			cout << 0 << endl;
			continue;
		}
		for(int i = 1; i<n; i++){
			if(s[i]!='0'){
				dp[i] += dp[i-1];
			}
			if((s[i-1]=='1' and  s[i]<='9')|| (s[i-1]=='2' and s[i]<='6')){
				dp[i] += dp[i-2];
			}
		}
		cout << dp[n-1] << endl;
	}
}