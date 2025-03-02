#include<bits/stdc++.h>

using namespace std;

vector<int> a[1005];
bool vs[1005];
int bfs(int u, int v){
	
	queue<pair<int,int>> q; // dinh, k
	q.push({u,0});
	vs[u] = true;
	while(!q.empty()){
		pair<int,int> tmp = q.front();
		q.pop();
		if(tmp.first==v){
			return tmp.second;
		}
		for(auto x: a[tmp.first]){
			if(!vs[x]){
				vs[x] = true;
				q.push({x,tmp.second+1});
			}
		}
	}
	return -1;
}

int main(){
	int test; cin >> test;
	while(test--){
		int n,m;
		cin >> n >> m;
		int dd,dc;
		for(int i = 1; i<=n; i++){
			a[i].clear();
		}
		for(int i = 0; i<m; i++){
			cin >> dd >> dc;
			a[dd].push_back(dc);
		}
		int res = 0,cnt = 0;
		for(int i = 1; i<=n; i++){
			for(int j = 1; j<=n; j++){
				if(i!=j){
					memset(vs,false,sizeof(vs));
					int t = bfs(i,j);
					if(t!=-1){
						res+=t;
						cnt++;
					}
				}
			}
		}
		cout << setprecision(2) << fixed << res*1.0/ cnt << endl;
	}
}