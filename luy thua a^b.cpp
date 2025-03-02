#include<bits/stdc++.h>

using namespace std;
long long mod = 1e9+7;
long long mu(long long a, long long b){
	if(b==0) return 1;
	if(b%2==0) return mu(a,b/2)*mu(a,b/2);
	return mu(a,b/2)*mu(a,b/2)*a;
}
long long mu2(long long a, long long b){
	long long tmp = 1;
	while(b>0){
		if(b&1){
			tmp=((tmp%mod) *(a%mod))%mod;
		}
		b/=2;
		a= ((a%mod)*(a%mod))%mod;
	}
	return tmp;
}
int main(){
	int test; cin >> test;
	while(test--){
		long long a,b; cin >> a >>b;
		cout << mu2(a,b);
		cout << endl;
	}
	return 0;
}