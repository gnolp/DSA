#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1005];
bool vs[1005];
vector<pair<int,int>> v;
void dfs(int u){
	vs[u] = true;
	for(auto x: adj[u]){
		if(!vs[x]){
			v.push_back({u,x});
			vs[x] =true;
			dfs(x);
		}
	}
}

int main(){
	int test; cin >> test;
	while(test--){
		int n,m,u; cin >> n >> m >> u;
		int dd,dc;
		memset(vs,false,sizeof(vs));
		v.clear();
		for(int i =1; i<=n; i++) adj[i].clear();
		for(int i =0; i<m; i++) {
			cin >>  dd >> dc;
			adj[dd].push_back(dc);
			adj[dc].push_back(dd);
		}
		dfs(u);
		if(v.size()==n-1){
			for(auto x:v) cout << x.first <<" " <<x.second << endl;
		}
		else cout << -1 << endl;
	}
}