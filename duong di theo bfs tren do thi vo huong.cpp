#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
int parent[1001];

void BFS(int u){
	queue<int> q;
	q.push(u);
	parent[u] = u;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(auto x:adj[v]){
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
		int n,m; cin >> n >>m;
		int st,ed; cin >> st >> ed;
		
		for(int i = 1; i <=n; i++) adj[i].clear();
		memset(parent,0,sizeof(parent));
		int dd,dc;
		for(int  i = 0; i <m; i++){
			cin >> dd >> dc;
			adj[dd].push_back(dc);
			adj[dc].push_back(dd);
		}
		BFS(st);
//		for(auto x:parent) cout << x << " " ;
		if(!parent[ed]){
			cout << -1 << endl;
		}
		else{
			vector<int> path;
			path.push_back(ed);
			while(ed!=st){
				path.push_back(parent[ed]);
				ed = parent[ed];
			}
			reverse(path.begin(),path.end());
			for(auto x: path) cout << x << " ";
			cout << endl;
		}
	}
}