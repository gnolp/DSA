#include<bits/stdc++.h>

using namespace std;

int n,m;
int parent[1005];

struct canh{
	int x,y,w;
};
vector<canh> dscanh;
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

bool cmp(canh a, canh b){
	return a.w < b.w;
}

void kruskal(){
	// buoc 1: sap xep dscanh theo trong so tang dan
	sort(dscanh.begin(),dscanh.end(),cmp);
	// buoc 2: lua chon canh tu ngan toi dai
	int d = 0;
	vector<canh> mst; // canh cua cay khung
	for(int i =0; i<m; i++){
		if(mst.size()==n-1) break;
		if(Union(dscanh[i].x,dscanh[i].y)){
			mst.push_back(dscanh[i]);
			d+= dscanh[i].w;
		}
	}
	cout << d << endl;
}

int main(){
	int test; cin >> test;
	while(test--){
		cin >> n >>m;
		init();
		dscanh.clear();
		for(int i = 0; i<m; i++){
			int x,y,z;
			cin >> x >> y >> z;
			dscanh.push_back({x,y,z});
		}
		kruskal();	
	}
	
}