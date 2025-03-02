#include<bits/stdc++.h>

using namespace std;
int x;
bool cmp(pair<int,int> a, pair<int,int> b){
	if(abs(x-a.first)==abs(x-b.first)){
		return a.second < b.second;
	}
	return abs(x-a.first)<abs(x-b.first);
}
int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >>n >> x;
		vector<pair<int,int>> v;
		v.resize(n);
		for(int i=0;i<n; i++){
			cin>> v[i].first;
			v[i].second = i;
		}
		sort(v.begin(),v.end(),cmp);
		for(auto it : v) cout << it.first <<" ";
		cout << endl;
	}
}