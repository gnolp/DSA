#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m,q;
	cin >> n >> m >> q;
	int d[n+5][n+5]={};
	int a[n+5][n+5];
//	memset(a,1e9,sizeof(a));
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=n; j++) a[i][j] = 1e9;
	}
	for(int i = 0; i< m; i++){
		int x,y,w;
		cin >> x >> y >> w;
		a[x][y] = w;
	}
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=n; j++){
			d[i][j] = a[i][j];
			cout << d[i][j] <<" ";
		}
		cout << endl;
	}
	for(int k = 1; k<=n; k++){
		for(int i = 1; i<=n; i++){
			for(int j = 1; j<=n; j++){
				if(d[i][j] > d[i][k] + d[k][j]){
					d[i][j] = d[i][k] + d[k][j];
				}
			}
		}
	}
	while(q--){
		int s,t;
		cin >> s >> t;
		if(d[s][t]!= 1e9)
		cout << d[s][t] << endl;
		else cout << -1 << endl;
	}
}