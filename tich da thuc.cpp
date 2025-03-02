#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n,m;
		cin >> n >>m;
		map<int,int> dt1,dt2;
		int x;
		for(int i =0; i <n; i++){
			cin >> x;
			dt1[i] = x;
		}
		for(int i = 0; i <m; i++){
			cin >> x;
			dt2[i] = x;
		}
		map<int,int> mp;
		
		for(int i = 0; i <n; i++){
			for(int j = 0; j <=m; j++){
				mp[i+j] += dt1[i] * dt2[j];
			}
		}
		vector<int> v;
		for(auto x:mp){
			v.push_back(x.second);
		}
		while(*(v.end()-1)==0) v.pop_back();
		if(v.size()==0){
			cout << 0 << endl;
		}
		else{
			for(auto x: v) cout << x << " ";
		cout << endl;
		}
	}
}