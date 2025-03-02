#include<bits/stdc++.h>

using namespace std;

int dv[1001];
vector<int> adj[1001];

int main(){
	int n,m;
	cin >> n >> m;
	int dd,dc;
	memset(dv,0,sizeof(dv));
	for(int i = 0; i<m; i++){
		cin >> dd >> dc;
		dv[dc]++;
		adj[dd].push_back(dc);
	}
	queue<int> q;
	for(int i = 1; i<=n; i++){
		if(dv[i]==0){
			q.push(i);
		}
	}
	vector<int> topo;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		topo.push_back(v);
		for(auto x:adj[v]){
			dv[x]--;
			if(dv[x]==0) q.push(x);
		}
	}
//	reverse(topo.begin(),topo.end());
	for(auto x:topo) cout << x<<" ";
}