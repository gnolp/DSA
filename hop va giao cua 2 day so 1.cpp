#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n,m; cin >> n >>m;
		map<int,int> mp;
		for(int i =0; i <n+m; i++){
			int x; cin >> x;
			mp[x]++;
		}
		for(auto x: mp){
			cout << x.first <<" ";
		}
		cout << endl;
		for(auto x:mp){
			if(x.second==2) cout <<x.first <<" ";
		}
		cout << endl;
	}
}