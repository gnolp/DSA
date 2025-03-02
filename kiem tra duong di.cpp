#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
int visited[1001];
int start,ed;

void BFS(int u){
	queue<int> q;
	q.push(u);
	visited[u] = 1;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(auto x:adj[v]){
			if(x==ed){
				visited[x] = 1;
				return;
			}
			if(!visited[x]){
				q.push(x);
				visited[x] = 1;
			}
		}
	}
}

int main(){
	int test; cin >> test;
	while(test--){
		int n,m;
		cin >> n >> m;
		memset(visited,0,sizeof(visited));
		int dd,dc;
		for(int i = 1; i<=n; i++) adj[i].clear();
		for(int i = 0; i <m; i++){
			cin >> dd >> dc;
			adj[dd].push_back(dc);
			adj[dc].push_back(dd);
		}
		
		int q; cin >> q;
		while(q--){
			cin >> start >> ed;
//			cout << start << " " << ed << endl;
			memset(visited,0,sizeof(visited));
			BFS(start);
			if(visited[ed]) cout <<"YES" << endl;
			else cout <<"NO" << endl;
		}
	}
}