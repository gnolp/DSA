#include<bits/stdc++.h>

using namespace std;
long long mod = 1e9+7;
int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >>n;
		vector<long long> v;
		for(int i =0; i <n; i++){
			long long x; cin >> x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		long long kq=0;
		for(int i =0; i <n; i++){
			kq = (kq%mod + v[i]*(i) % mod) %mod;
		}
		cout <<kq << endl;
	}
}