#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		long long n, k; cin >> n >> k;
		long long a[n];
		for(int i = 0; i<n; i++) cin >> a[i];
		long long cnt = 0;
		sort(a,a+n);
		for(int i =0; i <n; i++){
			if(a[i] > k) break;
			for(int j = i+1; j<n;  j++){
				auto tmp = lower_bound(a+j+1,a+n,k-a[i]-a[j]) - a -j-1;
//				cout << tmp <<" " << a[i] << " " << a[j] <<" " << a[tmp] <<endl; 
				cnt += tmp;
			}
		}
		cout << cnt << endl;
	}
}