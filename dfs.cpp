#include<bits/stdc++.h>

using namespace std;
//input
//9 9
//1 2
//1 3
//1 5
//2 4
//3 6
//3 7
//3 9
//5 8
//8 9

int n,m;
vector<int> adj[1001];
bool visited[1001];

void inp(){
	cin >> n  >>m;
	for(int i =0; i <m; i++){
		int x,y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited,false, sizeof(visited));
}

void DFS(int i){
	cout << i <<" ";
	visited[i] = true;
	for(auto x:adj[i]){
		if(!visited[x]){
			DFS(x);
		}
	}
}

int main(){
	inp();
	DFS(1);
}