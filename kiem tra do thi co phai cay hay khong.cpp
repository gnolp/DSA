#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int dd, dc;
		set<int> se;
		for(int i =0; i <n-1; i++){
			cin >> dd >> dc;
			se.insert(dd);
			se.insert(dc);
		}
		if(se.size()!=n) cout <<"NO" << endl;
		else cout <<"YES" << endl;
	}
}