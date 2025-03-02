#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
bool visited[1001];

void dfs(int u){
	stack<int> st;
	st.push(u);
	visited[u] = true;
	while(!st.empty()){
		int v = st.top();
		st.pop();
		for(auto x: adj[v]){
			if(!visited[x]){
				st.push(v);
				st.push(x);
				visited[x] = true;
				break;
			}
		}
	}
}

int main(){
	int test; cin >> test;
	while(test--){
		int n,e;cin >>n >> e;
		int dd, dc;
		memset(visited,false,sizeof(visited));
		for(int i = 1; i <=n; i++) adj[i].clear();
		for(int i =0; i <e; i++){
			cin >> dd >> dc;
			adj[dd].push_back(dc);
		}
		bool ok = true;
		for(int i = 1; i <=n; i++){
			if(!ok) break;
			memset(visited,false,sizeof(visited));
			dfs(i);
			for(int j = 1; j<=n; j++){
				if(!visited[j]){
					cout <<"NO" << endl;
					ok = false;
					break;
				}
			}
		}
		if(ok) cout << "YES" << endl;
	}
}