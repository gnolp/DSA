#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
	int test; cin >> test;
	while(test--){
		int n,m,k; cin >> n >> m >> k;
		map<ll,ll> m1;
		map<ll,ll> m2,m3,m12;
		int x;
		for(int i = 0; i< n; i++){
			cin >> x;
			m1[x]++;
		}
		for(int i =0; i <m; i++){
			cin >> x;
			m2[x]++;
		}
		for(int i =0; i <k; i++){
			cin >> x;
			m3[x]++;
		}
		for(auto x:m1){
			m12[x.first] = min(m1[x.first],m2[x.first]);
		}
		for(auto x:m12){
//			cout << x.first <<" " << x.second;
			m12[x.first] = min(m12[x.first],m3[x.first]);
		}
		bool ok = false;
		for(auto x:m12){
			while(x.second--){
				ok = true;
				cout << x.first << " ";
			}
		}
		if(!ok) cout << "No";
		cout << endl;
	}
}