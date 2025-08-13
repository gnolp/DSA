#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		long long n,k;
		cin >> n >> k;
		map<long long, int> mp;
		for(int i = 2; i<= sqrt(k); i++){
			while(k%i==0){
				mp[i]++;
				k/=i;
			}
		}
		if(k > 1) mp[k]++;
		long long ans = LLONG_MAX;
		for(pair<long long,int> x: mp){
			long long res = 0, power = x.first;
			    while (power <= n) {
			        res += n / power;
			        if (power > n / x.first) break;
			        power *= x.first;
			    }
			ans = min(ans,res / x.second);
		}
		cout << ans << endl;
	}
}