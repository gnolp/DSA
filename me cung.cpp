#include<bits/stdc++.h>

using namespace std;

struct canh{
	int x;
	int y;
};
int n,m;
vector<canh> c;
int pa[100005];
void init(){
	for(int i = 1; i<=n; i++){
		pa[i] = i;
	}
}

int find(int u){
	if(u==pa[u]){
		return u;
	}
	return find(pa[u]);
}

bool Union(int x,int y){
	x = find(x);
	y = find(y);
	cout << x << y << endl;
	if(pa[x]==pa[y]) return false;
	if(x<y) pa[y] = x;
	else pa[x] = y;
	return true;
}

void ktra(){
	for(int i = 0; i<m; i++){
		if(Union(c[i].x,c[i].y)){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
	return;
}

int main(){
	int test; cin >> test;
	while(test--){
		memset(pa,0,sizeof(pa));
		cin >> n >> m;
		init();
		
		c.clear();
		for(int i =0; i<m; i++){
			int x,y;
			cin >> x >> y;
			c.push_back({x,y});
		}
		ktra();
	}
	
}