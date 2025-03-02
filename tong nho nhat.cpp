#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >>test;
	while(test--){
		int n; cin >>n;
		int a[n];
		for(int i =0; i<n; i++) cin >> a[i];
		sort(a,a+n);
		long long so1=0, so2=0;
		for(int i =0; i < n-1; i+=2){
			so1 = so1*10 + a[i];
			so2 = so2*10+ a[i+1];
		}
		if(n&1) so1 = so1*10+ a[n-1];
		cout << so1 + so2 << endl;
	}
}