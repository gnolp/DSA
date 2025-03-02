#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n,k;
		cin >> n >> k;
		int a[n];
		for(int &x:a) cin >> x;
		sort(a,a+n);
		int cnt =0;
//		for(int x:a) cout << x<<" ";
//		cout << endl;
		for(int i = 0; i <n; i++){
			auto tmp = lower_bound(a+i+1,a+n,k+a[i]) - a-i-1;
			cnt += tmp;
		}
		cout << cnt << endl;
	}
}