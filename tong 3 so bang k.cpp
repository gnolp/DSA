#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int test; cin >> test;
	while(test--){
		long long n,k; cin >> n >> k;
		long long a[n];
		for(long long i = 0; i<n; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		bool ok = false;
		for(long long i = 0; i <n; i++){
			if(a[i] > k) break;
			for(long long j = i+1; j < n; j++){
				if(binary_search(a+j+1,a+n,k-a[i]-a[j])){
					ok = true;
					break;
				}
			}
			if(ok) break;
		}
		if(ok) cout <<"YES" << endl;
		else cout <<"NO" << endl;
	}
	return 0;
}