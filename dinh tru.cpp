#include<bits/stdc++.h>

using namespace std;

bool visited[1001];
vector<int> adj[1001];

void DFS(int u){
	for(auto x:adj[u]){
		if(!visited[x]){
			visited[x] = true;
			DFS(x);
		}
	}
}

int tp(int n){
	int k = 0;
	for(int i = 1; i<=n; i++){
		if(!visited[i]){
			k++;
			DFS(i);
		}
	}
	return k;
}

int main(){
	int test; cin >> test;
	while(test--){
		int n,e; cin >> n >> e;
		int dd,dc;
		memset(visited,false,sizeof(visited));
		for(int i = 1; i <=n; i++){
			adj[i].clear();
		}
		for(int i = 0; i <e; i++){
			cin >> dd >> dc;
			adj[dd].push_back(dc);
			adj[dc].push_back(dd);
		}
		int k = tp(n);
		int ans = 0;
		for(int i = 1; i<=n; i++){
			memset(visited,false,sizeof(visited));
			visited[i] = true;
			int temp = tp(n);
			if(temp>k) cout << i <<" ";
		}
		cout << endl;
	}
}