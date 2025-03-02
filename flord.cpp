#include<bits/stdc++.h>
#define ll				 long long
#define FOR(i,l,r)		 for(int i=l;i<r;i++)
#define FORX(i,l,r,x)	 for(int i=l;i<r;i+=x)
#define FORD(i,l,r)		 for(int i=l;i>=r;i--)
#define faster()		 cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define run()			 int t; cin >> t; while (t--)


using namespace std;

int main() {
	faster();
	int n, m, ok[1001][1001];
	cin >> n >> m;
	FOR(i, 1, n + 1)FOR(j, 1, n + 1)ok[i][j] = 1000000000;
	FOR(i, 1, n + 1)ok[i][i] = 0;
	FOR(i, 0, m) {
		int u, v, w; cin >> u >> v >> w;
		ok[u][v] = ok[v][u] = w;
	}
	FOR(k, 1, n + 1)
		FOR(i, 1, n + 1)
			FOR(j, 1, n + 1)
				ok[i][j] = min(ok[i][j], ok[i][k] + ok[k][j]);
	run() {
		int u, v; cin >> u >> v;
		cout << ok[u][v] << endl;
	}
	
}