#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
	return a.first < b.first;
}

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n];
		vector<pair<int,int>> v;
		for(int i=0;i<n;i++){
			cin >> a[i];
			v.push_back({a[i],i});
		}
		sort(v.begin(),v.end(),cmp);
		int kc = -1e9;
		int pos = v[0].second;
		for(int i =1; i < n; i++){
			kc = max(kc,v[i].second-pos);
			pos = min(v[i].second,pos);
		}
		cout << kc << endl;
	}
}