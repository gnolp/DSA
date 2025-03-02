#include<bits/stdc++.h>

using namespace std;

struct data{
	int value;
	int fr;
	int se;
};


bool cmp(data a, data b){
	if(a.value==b.value) return a.fr < b.fr;
	return a.value < b.value;
}

bool cmp1(data a, data b){
	return a.fr < b.fr;
}

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		vector<data> v(n);
		for(int i = 0; i <n; i++){
			cin >> v[i].value;
			v[i].fr = i;
		}
		sort(v.begin(),v.end(),cmp);
		for(int i =0; i <n; i++){
			v[i].se = i;
		}
		sort(v.begin(),v.end(),cmp1);
		int cnt = 0;
		int max_pos = -1;
		vector<int> keys;
		for(int i = 0 ;i <n-1; i++){
			max_pos = max(max_pos,v[i].se);
			if(max_pos==i){
				cnt++;
				keys.push_back(i+1);
			}
		}
		if(!cnt) cout << cnt << endl;
		else{
			for(auto x:keys) cout << x <<" ";
			cout << endl;
		}
	}
}