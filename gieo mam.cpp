#include<bits/stdc++.h>

using namespace std;
int n,m;
int a[1005][1005];
int dx[4] ={-1,0,0,1};
int dy[4] = {0,-1,1,0};
struct hat{
	int px,py;
	int ngay;
	hat(int x,int y,int ngay){
		this->px = x;
		this->py = y;
		this->ngay = ngay;
	}
};

int main(){
	int test; cin >> test;
	while(test--){
		cin >> n >> m;
		for(int i = 1; i<=n; i++){
			for(int j = 1; j<=m; j++){
				cin >> a[i][j];
			}
		}
		queue<hat> q;
		for(int i = 1; i<=n; i++){
			for(int j = 1; j<=m; j++){
				if(a[i][j]==2){
					q.push({j,i,0});
//					cout << j <<" " << i << endl;
				}
			}
		}
		int ans = -1;
		while(!q.empty()){
			hat tmp = q.front();
			int x = tmp.px;
			int y = tmp.py;
			int cnt = tmp.ngay;
			q.pop();
			for(int i = 0;i<4; i++){
				if(y+dy[i]>0 and y+dy[i]<=n and x+dx[i]>0 and x+dx[i]<= m and a[y+dy[i]][x+dx[i]]==1){
					a[y+dy[i]][x+dx[i]] = 2;
					q.push({x+dx[i],y+dy[i],cnt+1});
					if(a[y+dy[i]][x+dx[i]] == 2){
//						cout << x+dx[i] <<" " << y + dy[i] <<" " << cnt+1 << endl;
					}
					ans = max(ans,cnt+1);
				}
			}
		}
		bool ok = true;
		for(int i = 1; i<=n; i++){
			for(int j = 1; j<=m; j++){
				if(a[i][j]==1){
					ok = false;
					break;
				}
			}
			if(!ok) break;
		}
		if(!ok) cout << -1 << endl;
		else cout << ans << endl;
	}
}