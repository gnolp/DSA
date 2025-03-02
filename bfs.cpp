#include<bits/stdc++.h>

using namespace std;

int n,m;
vector<int> adj[1001];
bool visited[1001];
void inp(){
	cin >> n >> m;
	for(int i =0;i <m; i++){
		int x,y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited,false, sizeof(visited));
}

void BFS(int i){
	queue<int> q;
	q.push(i);
	visited[i] = true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		cout << v <<" ";
		for(auto x:adj[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
			}
		}
	}
}

int main(){
	inp();
	BFS(1);
}