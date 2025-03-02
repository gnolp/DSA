#include<bits/stdc++.h>

using namespace std;

int n,m;
vector<int> adj[1001];
//int a[1001];
bool visited[1001];
void inp(){
	cin >> n >> m;
	for(int i = 0;i <m; i++){
		int x,y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
}

void DFS(int i){
	visited[i] = true;
	cout << i <<" ";
	for(int x: adj[i]){
		if(!visited[x]){
			visited[x] = true;
			DFS(x);
		}
	}
}

int main(){
	inp();
	int cnt = 0;
	for(int i =1; i <=n; i++){
		if(!visited[i]){
			cnt++;
			cout <<"mang lien thong thu " << cnt <<":";
			DFS(i);
		}
	}
	cout << cnt << endl;
}