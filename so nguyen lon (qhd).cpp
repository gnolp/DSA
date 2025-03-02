#include<bits/stdc++.h>

using namespace std;

int main(){
	string a; cin >> a;
	string b; cin >> b;
	int dp[a.length()+5][b.length()+5]={};
	int m = 0;
	for(int i = 0; i <= a.length(); i++){
		for(int j = 0; j <= b.length(); j++){
			if(i==0||j==0) dp[i][j] = 0;
			else{
				if(a[i-1]==b[j-1]){
					dp[i][j] = dp[i-1][j-1] + 1;
				}
				else{
					dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
				}
			}
			m = max(dp[i][j],m);
		}
	}
	cout << m;
}