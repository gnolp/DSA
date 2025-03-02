#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		long long a[n];
		map<long long,int> mp;
		for(long long &x:a){
			cin >> x;
			mp[x]++;
		}
		bool ok = false;
		for(auto x:a){
			if(mp[x]>1){
				cout << x << endl;
				ok = true;
				break;
			}
		}
		if(!ok) cout <<"NO" << endl;
	}
	return 0;
}