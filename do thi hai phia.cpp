#include<bits/stdc++.h>

using namespace std;

int n,m;
vector<int> adj[1001];
int color[1001];

bool bfs(int u){
	queue<int> q;
	q.push(u);
	color[u] = 0;
	while(!q.empty()){
		int v= q.front();
		q.pop();
		for(auto x: adj[v]){
			if(color[x]	== -1 ){
				color[x] = 1 - color[v];
				q.push(x);
			}
			else if(color[x] == color[v]) return false;
		}
	}
	return true;
}

int main(){
	int test; cin >>test;
	while(test--){
		cin >> n >> m;
		int dd,dc;
		for(int i = 1; i <=n; i++){
			adj[i].clear();
		}
		memset(color,-1,sizeof(color));
		for(int i = 0; i <m; i++){
			cin >> dd >> dc;
			adj[dd].push_back(dc);
			adj[dc].push_back(dd);
		}
		bool ok = true;
		for(int i = 1; i <=n; i++){
			if(color[i]==-1){
				if(!bfs(i)){
					ok = false;
					break;
				}
			}
		}
		if(ok) cout << "YES" << endl;
		else cout <<"NO" << endl;
	}
}