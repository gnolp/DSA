#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll a[11][11];
ll d[11][11];
ll mod= 1e9 + 7;
int n; ll m;

void nhan(ll a[11][11],ll b[11][11]){
	ll c[11][11] ={};
	for(int i = 0; i <n; i++){
		for(int j = 0; j <n; j++){
			for(int k = 0; k < n; k++){
				c[i][j] += a[i][k] * b[k][j];
				c[i][j] %= mod;
			}
		}
	}
	for(int i = 0; i <n; i++){
		for(int j = 0; j <n; j++){
			a[i][j] = c[i][j];
		}
	}
}


void mu(ll a[11][11],ll m){
	if(m==1) return;
	mu(a,m/2);
	nhan(a,a);
	if(m%2==1) nhan(a,d);
}

int main(){
	int test; cin >> test;
	while(test--){
		cin >> n >> m;
		for(int i = 0; i <n; i++){
			for(int j = 0;  j<n; j++){
				cin >> a[i][j];
				d[i][j] = a[i][j];
			}
		}
		mu(a,m);
		for(int i =0; i <n; i++){
			for(int j = 0; j <n; j++){
				cout << a[i][j] <<" ";
			}
			cout << endl;
		}
	}
}