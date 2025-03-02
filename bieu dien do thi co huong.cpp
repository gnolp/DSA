#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n,m; cin >> n >>m;
		int dd,dc;
		vector<int> adj[n+1];
		for(int i =0; i <m; i++){
			cin >> dd >> dc;
			adj[dd].push_back(dc);
		}
		for(int i = 1; i <=n; i++){
			cout << i <<": ";
			for(auto x:adj[i]) cout << x <<" ";
			cout << endl;
		}
	}
}