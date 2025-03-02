#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1005];
vector<pair<int,int>> v;
bool vs[1005];

void bfs(int u){
	vs[u] = true;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(auto i: adj[x]){
			if(!vs[i]){
				v.push_back({x,i});
				vs[i] = true;
				q.push(i);
			}
		}
	}
}

int main(){
	int test; cin >> test;
	while(test--){
		int n,m,u; cin >> n >> m >> u;
		memset(vs,false,sizeof(vs));
		for(int i = 1; i<=n; i++){
			adj[i].clear();
		}
		v.clear();
		int dd, dc;
		for(int i = 0; i<m; i++){
			cin >> dd >> dc;
			adj[dd].push_back(dc);
			adj[dc].push_back(dd);
		}
		bfs(u);
		if(v.size()==n-1){
			for(auto x:v) cout << x.first <<" " << x.second << endl;
		}
		else cout << -1 << endl;
	}
}