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
void BFS(int u){
	queue<int> q;
	q.push(u);
	parent[u] = u;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(auto x: adj[v]){
			if(!parent[x]){
				q.push(x);
				parent[x] = v;
			}
		}
	}
}
int main(){
	int test; cin >> test;
	while(test--){
		int n,m; cin >> n >> m;
		int st, en;
		cin >> st >> en;
		for(int i = 1; i <=n; i++){
			adj[i].clear();
		}
		int dd,dc;
		memset(parent,0,sizeof(parent));
		for(int i =0; i <m; i++){
			cin >> dd >> dc;
			adj[dd].push_back(dc);
		}
//		DFS(st);
		BFS(st);

		if(!parent[en]){
			cout << -1 << endl;
		}
		else{
			vector<int> path;
			path.push_back(en);
			while(st!=en){
				path.push_back(parent[en]);
				en = parent[en];
			}
			reverse(path.begin(),path.end());
			for(auto x: path) cout << x << " ";
			cout << endl;
		}
	}
}