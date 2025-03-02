#include<bits/stdc++.h>

using namespace std;

//long long mod = 1e9+7;
bool cmp(long long a, long long b){
	return a>b;
}
int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		long long a[n],b[n];
		for(long long &x:a) cin >> x;
		for(long long &x:b) cin >> x;
		sort(a,a+n);
		sort(b,b+n,cmp);
		long long res = 0;
		for(int i = 0; i <n; i++){
			res = (res + (a[i]*b[i])) ;
		}
		
		cout << res << endl;
	}
}