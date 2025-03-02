#include<bits/stdc++.h>

using namespace std;


int n,m,s,t;

vector<int> adj[1001];
int visited[1001];
int parent[1001];

void inp(){
	cin >> n >> m ;
	for(int i =0; i <m; i++){
		int x,y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	cin >> s >> t;
}

void DFS(int u){
	visited[u] = 1;
	for(auto x:adj[u]){
		if(!visited[x]){
			parent[x] = u;
			DFS(x);
		}
	}
}
void Path(int s, int t){
	memset(visited,0,sizeof(visited));
	memset(parent,0,sizeof(parent));
	vector<int> path;
	DFS(s);
	if(!visited[t]) cout <<"khong di duoc" << endl;
	else{
		while(t!=s){
			path.push_back(t);
			t = parent[t];
		}
		path.push_back(t);
		reverse(path.begin(),path.end());
		for(auto x:path){
			cout << x <<" ";
		}	
	}
}
int main(){
	inp();
	Path(s,t);
}