#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n;
		cin >> n;
		map<int,int> mp;
		int keys;
		bool ok = false;
		for(int i =0;i<n; i++){
			int x; cin >> x;
			mp[x]++;
			if(mp[x] > n/2){
				keys = x;
				ok = true;
			} 
		}
		if(ok) cout << keys << endl;
		else cout <<"NO" << endl;
	}
}