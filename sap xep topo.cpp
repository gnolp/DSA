#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
int visited[1001];
stack<int> st;

void DFS(int u){
	visited[u] = 1;
	for(auto x : adj[u]){
		if(!visited[x]){
			DFS(x);
		}
	}
	st.push(u);
}

int main(){
	int n,m;
	cin >>  n >> m;
	int dd,dc;
	for(int i = 0; i <m; i++){
		cin >> dd >> dc;
		adj[dd].push_back(dc);
	}
	for(int i = 1; i <=n; i++){
		if(!visited[i]){
			DFS(i);
		}
	}
	while(!st.empty()){
		cout << st.top() <<" ";
		st.pop();
	}
}