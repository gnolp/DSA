#include<bits/stdc++.h>

using namespace std;

int prime[1000005];
long long mod = 1e9+7;
void sang(){
	prime[0] = prime[1] = 1;
	for(int i = 2; i<= sqrt(1000000); i++){
		if(!prime[i]){
			for(int j = i*i; j <= 1000000; j+=i){
				prime[j] = 1;
			}
		}
	}
}

long long a[1000005];
void check(){
	a[0] = a[1] = 0;
	a[2] = 2;
	for(int i = 3 ; i <=1000000; i++){
		a[i] = a[i-1];
		if(!prime[i]){
			a[i] = (a[i-1]*i)%mod;
		}
	}
}

int main(){
	sang();
	check();
	int q; cin >> q;
	while(q--){
		int n; cin >> n;
		cout << a[n] << endl;
	}
}