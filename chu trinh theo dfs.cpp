#include<bits/stdc++.h>

using namespace std;

set<int> adj[1005];
int e[1005];
int vs[1005];
bool ok;
void dfs(int u){
	vs[u] = 1;
	if(u==1) vs[u] = 0;
	for(auto x: adj[u]){
		if(!vs[x]){
			if(!ok){
				if(x==1 and e[u]!=1){
					int v = u;
					stack<int> st;
					st.push(1);
					while(e[v]!=0){
						st.push(v);
						v = e[v];
					}
					cout << 1 <<" ";
					while(!st.empty()){
						cout << st.top() <<" ";
						st.pop();
					}
					
					ok = 1;
					return;
				}
				else if(x==1 and e[u]==1){
					continue;
				}
				else{
					vs[x] = 1;
					e[x] = u;
					dfs(x);
				}
			}
		}
	}
}

int main(){
	int test; cin >> test;
	while(test--){
		int n,m;
		cin >> n >> m;
		int dd,dc;
		for(int i = 1; i<=n; i++){
			adj[i].clear();
			e[i] = 0;
			vs[i] = 0;
		}
		for(int i = 0; i<m; i++){
			cin >> dd >> dc;
			adj[dd].insert(dc);
			adj[dc].insert(dd);
		}
		ok = 0;
		
		dfs(1);
		if(!ok) cout <<"NO";
		cout << endl;
	}
}