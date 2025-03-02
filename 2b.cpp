#include<bits/stdc++.h>

using namespace std;

int main(){
	int d,n;
	cin >> d >> n;
	map<int,int> mp;
	char c;
	for(int i =0; i<n; i++){
		for(int j = 0; j<d; j++){
			cin >> c;
			if(c == '1'){
				mp[j] += 1;
			}
		}
	}
	vector<pair<int,int>> v(mp.begin(),mp.end());
	sort(v.begin(),v.end(), [](const pair<int,int> &a, const pair<int,int> &b){
		if (a.second != b.second){
			return a.second > b.second;
		}
		return a.first > b.first;
		
	});
	int ans = 0;
	int len = v.size();
	for(int i =0; i<len; i++){
		pair<int,int> x = v[i];
		if(x.second == d){
			ans += 1;
		}
		else if( x.second != d and i < len-1){
			ans +=3;
		}
		else{
			ans += 1;
		}
	}
	cout << ans << endl;
}