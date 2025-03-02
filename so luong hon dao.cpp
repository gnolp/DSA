#include<bits/stdc++.h>

using namespace std;

int dy[8] = {-1,-1,-1,0,0,1,1,1};
int dx[8] = {-1,0,1,-1,1,-1,0,1};

int n,m;
int a[1001][1001];
void loang(int x,int y){
	for(int k = 0; k <8; k++){
		if(x+dx[k]>=0 && y+dy[k] >=0 && x + dx[k] <n && y+dy[k] < m && a[x+dx[k]][y+dy[k]]==1){
			a[x+dx[k]][y+dy[k]] = 0;
			loang(x+dx[k],y+dy[k]);
		}
	}
}

int main(){
	int test; cin >> test;
	while(test--){
		cin >> n >> m;
		for(int i = 0; i <n; i++){
			for(int j =0 ;j < m; j++){
				cin >> a[i][j];
			}
		}
		int cnt = 0;
		for(int i = 0;i<n; i++){
			for(int j = 0; j <m; j++){
				if(a[i][j]==1){
					a[i][j] = 0;
					loang(i,j);
					cnt++;
//					cout << cnt << endl;
				}
			}
		}
		cout << cnt << endl;
	}
}