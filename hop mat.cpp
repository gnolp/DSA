#include<bits/stdc++.h>

using namespace std;

vector<int> nadj[1005];
set<int> se;
int vs[1005];

int bfs(int u){
	queue<int> q;
	q.push(u);
	vs[u] = 1;
	int cnt = 0;
	cnt += se.count(u);
//	cout << cnt << endl;
	while(!q.empty()){
		int v = q.front();
//		cout << v << endl;
		q.pop();
		for(auto x: nadj[v]){
			if(!vs[x]){
				vs[x] = 1;
				q.push(x);
				cnt += se.count(x);
			}
		}
	}
//	cout << cnt <<" " << u << endl;
	return cnt;
}

int main(){
		int p;
		int k,n,m; cin >> k >> n >> m;
		for(int i = 0; i<k ; i++){
			
			cin >> p;
			se.insert(p);
		}
		
		int dd,dc;
		for(int i = 0; i<m; i++){
			cin >> dd >> dc;
			nadj[dc].push_back(dd);
		}
		int ans = 0;
		for(int i = 1; i<=n; i++){
			memset(vs,0,sizeof(vs));
			if(bfs(i)==k) ans++;
		}
		cout << ans;
	return 0;
}