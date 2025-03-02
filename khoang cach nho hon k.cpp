#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n,k; cin >> n >> k;
		int a[n];
		for(int &x:a) cin >> x;
		sort(a,a+n);
		long long ans = 0;
		for(int i = 0; i<n; i++){
			int pos = lower_bound(a,a+n,a[i]+k) - a;
			pos--;
			ans+= (pos-i);	
		}
		cout << ans << endl;
	}
}

// 1 2 4 10, k = 3;

// 
