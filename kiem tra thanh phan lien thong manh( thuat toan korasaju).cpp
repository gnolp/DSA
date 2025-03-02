#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1005], t_adj[1005];
int visited[1005];
stack<int> topo;
// sắp xếp topo, lật ngược chiều đồ thị, dfs theo topo.
void dfs(int u){
	for(auto x:adj[u]){
		if(!visited[x]){
			visited[x] = 1;
			dfs(x);
		}
	}
	topo.push(u);
}

void dfs2(int u){
	cout << u <<" ";
	for(auto x: t_adj[u]){
		if(!visited[x]){
			visited[x] = 1;
			dfs2(x);
		}
	}
}

int main(){
	int n,m; cin >> n >> m;
	int dd,dc;
	for(int i = 0; i<m; i++){
		cin >> dd >> dc;
		adj[dd].push_back(dc);
		t_adj[dc].push_back(dd);
	}
	for(int i = 1; i<=n; i++){
		if(!visited[i]) dfs(i);
	}
	int k = 1;
	memset(visited,0,sizeof(visited));
	while(!topo.empty()){
		int v =topo.top();
		topo.pop();
		if(!visited[v]){
			visited[v] = 1;
			cout << k <<": ";
			dfs2(v);
			cout << endl;
			k++;
		}
	}
}