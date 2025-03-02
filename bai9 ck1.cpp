#include<bits/stdc++.h>

using namespace std;

vector<int> adj[100005];
bool vs[100005];
int cnt;
void dfs(int u){
	vs[u] = true;
	cnt++;
	for(auto x:adj[u]){
		if(!vs[x]){
			dfs(x);
		}
	}
}
bool cmp(int x,int y){
	return x > y;
}
int main(){
	int n,m;
	cin >> n >>m;
	int dd,dc;
	for(int i = 0; i<m; i++){
		cin >> dd >> dc;
		adj[dd].push_back(dc);
		adj[dc].push_back(dd);
	}
	vector<int> k;
	for(int i = 1; i<=n; i++){
		if(!vs[i]){
			dfs(i);
			k.push_back(cnt);
			cnt = 0;
		}
	}
	sort(k.begin()+1,k.end(),cmp);
	cout << k[0] + k[1];
	cout << endl;
}