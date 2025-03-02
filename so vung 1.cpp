#include<bits/stdc++.h>

using namespace std;
int a[1001][1001];
int n;
void inp(){
	for(int i =1 ; i <=n; i++){
		for(int j= 1; j <=n; j++){
			cin >> a[i][j];
		}
	}
}
int di[4] = {1,0,0,-1};
int dj[4] = {0,1,-1,0};

void Try(int i,int j){
	a[i][j] = 0;
	for(int k = 0;k<4; k++){
		int i1 = i+di[k];
		int j1 = j+dj[k];
		if(i1>=1 && j1 >=1 && i1 <=n && j1<=n && a[i1][j1]){
			Try(i1,j1);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		cin >> n;
		inp();
		int cnt = 0;
		for(int i = 1;i<=n; i++){
			for(int j = 1; j <=n; j++){
				if(a[i][j]){
					cnt++;
					Try(i,j);
				}
			}
		}
		cout << cnt << endl;
	}
}