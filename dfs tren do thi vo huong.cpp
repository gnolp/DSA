#include<bits/stdc++.h>

using namespace std;
vector<int> adj[1001];
int n,m;
bool visited[1001];
void DFS(int u){
	cout << u <<" ";
	for(auto x:adj[u]){
		if(!visited[x]){
			visited[x] = true;
			DFS(x);
		}
	}
}

int main(){
	int test; cin >> test;
	while(test--){
		int u;
		cin >> n >> m >> u;
		int dd,dc;
		for(int i = 1;i<=n;i++) adj[i].clear();
		memset(visited,false,sizeof(visited));
		for(int i = 0; i <m; i++){
			cin >> dd >> dc;
			adj[dd].push_back(dc);
			adj[dc].push_back(dd);
		}
		
		visited[u] = true;
		DFS(u);
		cout << endl;
	}
}