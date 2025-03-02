#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
int visited[1001];
int n,m;

bool DFS(int u,int parent){
	visited[u] = 1;
	for(int x :adj[u]){
		if(!visited[x]){
			if(DFS(x,u)) return true;
		}
		else if(x != parent) return true;
	}
	return false;
}

int main(){
	int test; cin >> test;
	while(test--){
		cin >> n >>m;
		int dd,dc;
		memset(visited,false,sizeof(visited));
		for(int i = 1; i <=n; i++) adj[i].clear();
		for(int i =0; i<m; i++){
			cin >> dd >> dc;
			adj[dd].push_back(dc);
			adj[dc].push_back(dd);
		}
		bool ok = false;
		for(int i = 1;i<=n; i++){
			if(!visited[i]){
				if(DFS(i,0)){
					ok = true;
					break;
				}
			}
		}
		if(ok) cout <<"YES" << endl;
		else cout <<"NO" << endl;	
	}
}