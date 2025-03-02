#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		long long n; cin >> n;
		vector<long long> v;
		for(long long i = 0; i<n; i++){
			long long x; cin >> x;
			v.push_back(x*x);
		}
		sort(v.begin(),v.end());
		bool ok = false;
		for(long long i = 0; i <n; i++){
			for(long long j = i+1; j < n; j++){
				if(binary_search(v.begin()+j+1,v.end(),v[i]+v[j])){
					ok = true;
					break;
				}
			}
		}
		if(ok) cout <<"YES" << endl;
		else cout <<"NO" << endl;
	}
	return 0;
}