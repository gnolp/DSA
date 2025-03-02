#include<bits/stdc++.h>

using namespace std;

struct cmp{
	bool operator() (pair<int,int> a, pair<int,int> b){
		if(a.second != b.second){
			return a.second > b.second;
		}
		return a.first < b.first;
	}
};

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		map<int,int> mp;
		for(int i =0 ; i <n; i++){
			int x; cin >> x;
			mp[x]++;
		}
		set<pair<int,int>,cmp> Mp(mp.begin(),mp.end());
		for(auto x:Mp){
			while(x.second){
				cout << x.first <<" ";
				x.second--;
			}
		}
		cout << endl;
	}
	return 0;
}