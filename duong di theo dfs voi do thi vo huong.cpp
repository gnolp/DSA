#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
int parent[1001];

void DFS(int u){
	for(auto x:adj[u]){
		if(!parent[x]){
			parent[x] = u;
			DFS(x);
		}
	}
}

int main(){
	int test; cin >> test;
	while(test--){
		int n,m; cin >> n >> m;
		int st,ed; cin >> st >> ed;
		
		memset(parent,0,sizeof(parent));
		for(int i = 1; i <=n; i++) adj[i].clear();
		int dd,dc;
		for(int i = 0; i <m; i++){
			cin >> dd >> dc;
			adj[dd].push_back(dc);
			adj[dc].push_back(dd);
		}
		parent[st] = st;
		DFS(st);
		if(!parent[ed]) cout << -1 << endl;
		else{
	//		for(int i = 1; i <=n; i++) cout << parent[i] <<" ";
	//		cout << endl;
			vector<int> path;
			path.push_back(ed);
			while(ed!=st){
				path.push_back(parent[ed]);
				ed = parent[ed];
			}
			reverse(path.begin(),path.end());
			for(auto x:path) cout << x <<" ";
			cout << endl;
		}
	}
}