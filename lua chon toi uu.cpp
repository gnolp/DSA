#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
	return a.second < b.second;
}

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >>n;
		vector<pair<int,int>> v;
		for(int i = 0; i <n; i++){
			int x,y; cin>>x >> y;
			v.push_back({x,y});
		}
		sort(v.begin(),v.end(),cmp);
		int cnt = 1;
		int pos = v[0].second;
//		cout << pos << endl;
//		for(auto x:v){
//			cout << x.first <<" " << x.second << endl;
//		}
		for(int i = 1; i <n; i++){
			if(v[i].first >= pos){
				cnt++;
				pos = v[i].second;
			}
		}
		cout << cnt << endl;
	}
}