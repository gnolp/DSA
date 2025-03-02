#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1005];
bool vs[1005];
int dfs(int u,int cnt){
	vs[u] = true;
	for(auto x: adj[u]){
		if(!vs[x]){
			cnt = dfs(x,cnt+1);
		}
	}
	return cnt;
}

int main(){
	int test; cin >> test;
	while(test--){
		int n, m; cin >> n >>m;
		int dd,dc;
		memset(vs,false,sizeof(vs));
		for(int i =1; i<=n; i++) adj[i].clear();
		for(int i =0; i<m; i++){
			cin >> dd >> dc;
			adj[dd].push_back(dc);
			adj[dc].push_back(dd);
		}
		int ans = 1;
		for(int i = 1; i<=n; i++){
			if(!vs[i]){
				ans = max(ans,dfs(i,1));
			}
		}
		cout << ans << endl;
	}
}