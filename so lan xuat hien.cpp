#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n, x; cin >> n >> x;
		map<int,int> mp;
		for(int i =0; i <n; i++){
			int t;
			cin >> t;
			mp[t]++;
		}
		if(mp[x]) cout << mp[x] << endl;
		else cout <<-1 << endl;
	}
}