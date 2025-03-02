#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
bool visited[1001];

void DFS(int u){
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
		int n,m;
		cin >> n >>m;
		memset(visited,false,sizeof(visited));
		for(int i = 1; i <=n; i++){
			adj[i].clear();
		}
		int dd,dc;
		for(int i =0; i <m; i++){
			cin >> dd >> dc;
			adj[dd].push_back(dc);
			adj[dc].push_back(dd);
		}
		int k = 0;
		for(int i = 1; i <=n; i++){
			if(!visited[i]){
				visited[i] = true;
				DFS(i);
				k++;
			}
		}
		cout << k << endl;
	}
}