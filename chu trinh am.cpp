#include<bits/stdc++.h>

using namespace std;

int n,m;
vector<int> adj[1005];
bool vs[1005];
int a[1005][1005];

bool bfs(int u){
	queue<pair<int,int>> q;
	q.push({u,0});
	vs[u] = true;
	while(!q.empty()){
		pair<int,int> tmp = q.front();
		q.pop();
		int v = tmp.first;
		for(auto x: adj[v]){
			if(!vs[x]){
				q.push({x,tmp.second+a[v][x]});
				vs[x] = true;
		//		break;
			}
			else  if(x==u and tmp.second+ a[v][x] < 0) return true;
		}
	}
	return false;
}

bool ktra(){
	for(int i = 1; i<=n; i++){
		memset(vs,false,sizeof(vs));
		if(bfs(i)) return true;
	}
	return false;
}

int main(){
	int test; cin >> test;
	while(test--){
		cin >> n >>m;
		for(int i = 1; i<=n; i++){
			adj[i].clear();
		}
		for(int i =0; i<m; i++){
			int x,y,w;
			cin >> x >> y >> w;
			adj[x].push_back(y);
			a[x][y] = w;
		}
		cout << ktra() << endl;
	}
}