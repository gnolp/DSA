#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		string a,b;
		cin >> a >> b;
		int n = a.length();
		int m = b.length();
		int f[n+1][m+1]; // f[i][j] luu do dai xau chung lon nhat khi su dung i ki tu dau
						// cua xau a va j ki tu dau cua xau b;
		for(int i =0 ; i <=n; i++){
			for(int j = 0; j <=m; j++){
				if(i==0|| j==0){
					f[i][j] = 0;
				}
				else{
					if(a[i-1]==b[j-1]){
						f[i][j] = f[i-1][j-1] + 1;
					}
					else{
						f[i][j] = max(f[i-1][j],f[i][j-1]);
					}
				}
			}
		}
		cout << f[n][m] << endl;
	}
	return 0;
}