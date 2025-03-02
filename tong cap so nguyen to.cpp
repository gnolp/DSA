#include<bits/stdc++.h>

using namespace std;

int a[1000000];
void sang(){
	a[0] = a[1] = 1;
	for(int i = 2; i*i <= 1000000; i++){
		if(!a[i]){
			for(int j = i*i; j <= 1000000; j+=i){
				a[j] = 1;
			}
		}
	}
}

int main(){
	sang();
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		bool ok = false;
		for(int i = 2; i<= n/2; i++){
				if(!a[i] && !a[n-i]){
				cout << i  <<" "<< n-i << endl;
				ok = true;
				break;
				}
		}
		if(!ok) cout << -1 << endl;
	}
}