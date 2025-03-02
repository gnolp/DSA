#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n,m; cin >> n >> m;
		int w[n+5];
		int v[n+5];
		for(int i = 1; i <= n; i++){
			cin >> w[i];
		}
		for(int i = 1; i <=n; i++){
			cin >> v[i];
		}
		int d[n+5][m+5];
		for(int i =0; i <=n; i++){
			for(int j = 0; j<= m; j++){
				if(i==0|| j==0){
					d[i][j] = 0;
				}
				else{
					d[i][j] = d[i-1][j];
					if(j>=w[i]){
						d[i][j] = max(d[i][j],d[i-1][j-w[i]]+ v[i]);
					}
				}
			}
		}
		cout << d[n][m] << endl;
	}
}