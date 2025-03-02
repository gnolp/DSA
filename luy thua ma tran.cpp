#include<bits/stdc++.h>

using namespace std;


long long mod = 1e9+7;
long long a[11][11], d[11][11];
int n,k;
void nhan(long long a[11][11], long long b[11][11]){
	long long c[11][11] ={};
	for(int i = 1; i <=n; i++){
		for(int j = 1; j <=n; j++){
			for(int k = 1; k <=n; k++){
				c[i][j] += a[i][k] * b[k][j];
				c[i][j] = c[i][j] % mod;
			}
		}
	}
	for(int i = 1; i <=n; i++){
		for(int j = 1; j <=n; j++){
			a[i][j] = c[i][j];
		}
	}
}

void mu(long long a[11][11],int k){
	if(k==1) return;
	mu(a,k/2);
	nhan(a,a);
	if(k%2==1) nhan(a,d);
}

int main(){
	int test; cin >> test;
	while(test--){
		cin >> n;
		cin >> k;
		for(int i = 1; i <=n; i++){
			for(int j = 1; j <=n; j++){
				cin >> a[i][j];
				d[i][j] = a[i][j];
			}
		}
		mu(a,k);
		long long ans = 0;
		for(int i = 1; i <=n; i++){
			ans += a[i][n];
			ans = ans%mod;
		}
		cout << ans << endl;
	}
}