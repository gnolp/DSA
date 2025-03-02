#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		string s1;
		string s2;
		cin >> s1 >> s2;
		int n = s1.length();
		int m = s2.length();
		int f[n+1][m+1];
		for(int i = 0; i<=n; i++){
			for(int j = 0; j <=m; j++){
				if(i==0){
					f[i][j] = j;
				}
				else if(j==0){
					f[i][j] = i;
				}
				else if(s1[i-1]==s2[j-1]){
					f[i][j] = f[i-1][j-1];
				}
				else{
					f[i][j] = min(f[i-1][j]+1,f[j-1][i]+1,f[i-1][j-1]+1);
				}
			}
		}
		cout << f[n][m] << endl;
	}
}