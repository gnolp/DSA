#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
bool visited[1001];
int n,e;

void dfs(int u){
	for(auto x:adj[u]){
		if(!visited[x]){
			visited[x] = true;
			dfs(x);
		}
	}
}

int tp(){
	int k = 0;
	for(int i = 1; i <=n; i++){
		if(!visited[i]){
			k++;
			dfs(i);
		}
	}
	return k;
}

int main(){
	int test; cin >> test;
	while(test--){
		cin >> n >> e;
		int degt[1001]={},degc[1001]={};
		for(int i = 1; i <=n; i++) adj[i].clear();
		memset(visited,false,sizeof(visited));
		int dd, dc;
		for(int i=0;i<e; i++){
			cin >> dd >> dc;
			adj[dd].push_back(dc);
			adj[dc].push_back(dd);
			degt[dc]++;
			degc[dd]++;
		}
		int k = tp();
		if(k==1){
			bool ok = true;
			for(int i = 1;i<=n; i++){
				if(degt[i]!=degc[i]){
					ok = false;
					break;
				}
			}
			if(ok) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
}