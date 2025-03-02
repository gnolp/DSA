#include<bits/stdc++.h>

using namespace std;

int dy[8] ={-1,-1,-1,0,0,1,1,1};
int dx[8] = {-1,0,1,-1,1,-1,0,1};
// ok = -1: bat dau
// ok = 0: tren trai
//ok = 1: len tren
// ok = 2: tren phai
//ok = 3 ben trai
// ok = 4 ben phai
//ok =  5 duoi trai
//ok = 6 xuong duoi
//ok = 7 duoi phai
char a[1005][1005];
int n,m;
bool check(int x,int y,int ok,int cnt){
	if(cnt > 3) return false;
	if(a[y][x] =='T') return true;
	for(int i  =0; i<8 ; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx < m and ny < n and nx>=0 and ny>=0 and (a[ny][nx]=='.'|| a[ny][nx]=='T')){
//			cout << ny <<" " << nx << endl;
			a[y][x] ='*';
			if(i==ok || ok ==-1){
				if(check(nx,ny,i,cnt)) return true;
			}
			else{
				if(check(nx,ny,i,cnt+1)) return true;
			}
			a[y][x] = '.';
		}
	}
	return false;
}

int main(){
	int test; cin >> test;
	while(test--){
		cin >> n >> m;
		memset(a,'*',sizeof(a));
		int xs,ys,xe,ye;
		for(int i =0; i<n; i++){
			for(int j = 0; j<m; j++){
				cin >> a[i][j];
				if(a[i][j]=='S'){
					xs = j;
					ys = i;
				}
				else if(a[i][j]=='T'){
					xe = j;
					ye = i;
				}
			}
		}
//		cout << ys <<"." << xs << endl;
		if(check(xs,ys,-1,1)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}