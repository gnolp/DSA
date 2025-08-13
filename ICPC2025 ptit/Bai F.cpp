#include<bits/stdc++.h>

using namespace std;

int n,m;
vector<int> adj[200002];
bool visited [200002];
int temp;
void dfs(int i){
	visited[i] = true;
	for(int x: adj[i]){
		if(!visited[x]){
			visited[x] = true;
			temp++;
			dfs(x);
		}
	}
}

int main(){
	int n,m; cin >> n >> m;
	for(int i = 0;i <m; i++){
		int x,y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
	temp = 1;
	int ans = 1;
	for(int i = 1; i<=n; i++){
		if(!visited[i]){
			dfs(i);
			ans = max(temp,ans);
			temp = 1;
		}
	}
	cout << ans;
}