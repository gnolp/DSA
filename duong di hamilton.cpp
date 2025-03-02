#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1005];
int deg[1005];
bool vs[1005];
bool ok = 0;
int n,m;
void dfs(int u,int k){
	vs[u] = 1;
	for(auto x: adj[u]){
		if(k==n){
			ok = 1;
			return;
		}
		if(!vs[x]){
			vs[x] = 1;
			dfs(x,k+1);
			vs[x] = 0;
		}
	}
}

int main(){
	int test; cin >> test;
	while(test--){
		cin >> n >> m;
		for(int i = 1; i<=n; i++) adj[i].clear();
		memset(vs,false,sizeof(vs));
		int dd,dc;
		for(int i =0; i<m; i++){
			cin >> dd >> dc;
			adj[dd].push_back(dc);
			adj[dc].push_back(dd); 
		}
		ok = 0;
		for(int i = 1; i<=n; i++){
			memset(vs,false,sizeof(vs));
			dfs(i,1);
			if(ok){
				cout << 1 << endl;
				break;
			}
		}
		if(!ok) cout << 0 << endl;
	}
	return 0;
}