#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int test; cin >> test;
	while(test--){
		long long n, s; cin >> n >> s;
		long long ans = 0;
		int a[n];
		int pos = 0;
		bool ok = false;
		for(int i =0; i<n; i++){
			cin >> a[i];
			if(s==0 and a[i] ==0) ok = true;
			ans += a[i];
			while(ans > s){
				ans -= a[pos];
				pos ++;
			}
			if(ans == s && s!= 0) ok = true;
		}
		if(ok) cout <<"YES" << endl;
		else cout <<"NO" << endl;
	}
}