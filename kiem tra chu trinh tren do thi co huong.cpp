#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
int color[1001];
int parent[1001];
int n,m;


bool dfs(int u){
	color[u] = 1;
	for(auto x:adj[u]){
		if(!color[x]){
			parent[x] = u;
			if(dfs(x)) return true;
		}
		if(color[x]==1){
			return true;
		}
	}
	color[u] = 2;
	return false;
}

int main(){
	int test; cin >> test;
	while(test--){
		cin >> n >> m;
		memset(parent,0,sizeof(parent));
		for(int i = 1;i<=n; i++) adj[i].clear();
		memset(color,0,sizeof(color));
		int dd,dc;
		for(int i =0; i <m; i++){
			cin >> dd >> dc ;
			adj[dd].push_back(dc);
		}
		
		bool ok = false;
		for(int i = 1; i<=n; i++){
			if(!color[i]){
				if(dfs(i)){
					ok = true;
					break;
				}
			}
		}
		if(ok) cout <<"YES" << endl;
		else cout <<"NO" << endl;
	}
	return 0;
}