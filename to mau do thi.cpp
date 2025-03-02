#include<bits/stdc++.h>

using namespace std;

vector<int>  adj[1005];
int deg[1005];

int vs[1005];


int main(){
    int test; cin >> test;
    while(test--){
        int n,m,c;
        cin >> n >> m >> c;
        int dd,dc;
        memset(vs,0,sizeof(vs));
        for(int i = 1; i<=n; i++){
            adj[i].clear();
            deg[i] = 0;
        }
        for(int i =0; i<m; i++){
            cin >> dd >> dc;
            adj[dd].push_back(dc);
            adj[dc].push_back(dd);
            deg[dd]++;
            deg[dc]++;
        }
        int k = 1;
        while(k <= c){
	        int md;
	        int me = -1;
	        for(int i = 1; i<=n; i++){
	        	if(vs[i] <= 0 and deg[i] > me){
	        		md = i;
	        		me = deg[i];
				}
			}

			vs[md] = k;
			for(auto x: adj[md]){
				if(vs[x]<=0){
					deg[x]--;
					vs[x] = 0- k;
				}
			}

			for(int i = 1; i<=n; i++){
				if(vs[i] <=0 and vs[i] + k > 0){
					vs[i] = k;
					for(auto x:adj[i]){
						if(vs[x] <=0){
							deg[x]--;
							vs[x] = 0-k;
						}
					}
				}
			}
			k++;
			
		}
		bool ok = true;
		for(int i = 1; i<=n; i++) {
			if(vs[i]<=0){
				ok = false;
			}
		}
		if(ok) cout <<"YES";
		else cout << "NO";
		cout << endl;
    }
    return 0;
}
