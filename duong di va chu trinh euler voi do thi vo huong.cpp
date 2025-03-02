#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
bool visited[1001];

void bfs(int u){
	queue<int> q;
	q.push(u);
	visited[u] =  true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(auto x:adj[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
			}
		}
	}
}

int main(){
	int test; cin >> test;
	while(test--){
		int n, e;
		cin >> n >> e;
		int dd,dc;
		memset(visited,false,sizeof(visited));
		for(int i = 1; i <=n; i++) adj[i].clear();
		map<int,int> mp; // dinh, bac
		for(int i =0;  i<e; i++){
			cin >> dd >> dc;
			adj[dd].push_back(dc);
			adj[dc].push_back(dd);
			mp[dd]++;
			mp[dc]++;
		}
		int k = 0;
		for(int i = 1; i<=n; i++){
			if(!visited[i]){
				k++;
				bfs(i);
			}
		}
//		cout << k << endl;
		if(k==1){
			int bl = 0;
			for(int i = 1; i <=n; i++){
				if(mp[i]%2==1) bl++;
			}
			if(bl==0){
				cout << 2 << endl;
			}
			else if(bl==2) cout << 1 << endl;
			else {
				cout << 0 << endl;
			}
		}
		else{
			cout << 0 << endl;
		}
	}
}