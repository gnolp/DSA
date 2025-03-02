#include<bits/stdc++.h>

using namespace std;

long long mod = 1e9+7;

int main(){
	int test; cin >> test;
	while(test--){
		int n,k; cin >> n >> k;
		int d[n+5]= {};
		d[0] = 0;
		if(k>=n){
			k = n;
		}
		for(int i = 1;i<=k; i++){
			d[i] = 1;
		}
		for(int i = 2;i<=n; i++){
//			cout << i <<": ";
			int temp = i - k;
			if(temp < 0){
				temp = 0;
			}
			for(int j = temp;j<i; j++){
//				if(j==0) d[i] = 0;
				d[i] = (d[i]%mod+ d[j]%mod) %mod;
//				cout << d[i] <<" ";
			}
//			cout << endl;
		}
		cout << d[n] << endl;
	}
}