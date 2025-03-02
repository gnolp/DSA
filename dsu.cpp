#include<bits/stdc++.h>

using namespace std;

int n,m;
int parent[1005];

void init(){
	for(int i = 1; i<=n; i++){
		parent[i] = i;
	}
}
// tim nguoi dai dien
int find(int u){
	if(u==parent[u]){
		return u;
	}
	return parent[u] = find(parent[u]);
}
// gop
bool Union(int u,int v){
	u = find(u);
	v = find(v);
	if(u==v){
		return false;
	}
	if(u<v) parent[v] = u;
	else parent[u] = v;
	return true;
}

int main(){
	cin >> n >>m;
	init();
	int cnt = n;
	for(int i = 0; i<m; i++){
		int x,y;
		cin >> x >> y;
		if(Union(x,y)) cnt--;
	}
	cout << cnt << endl;
}