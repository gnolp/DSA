#include<bits/stdc++.h>

using namespace std;
#define ll long long

ll a[3][3],b[3][3];
ll mod = 1e9+7;

void nhan(ll a[3][3],ll b[3][3]){
	ll c[3][3] ={};
	for(int i = 0; i <2; i++){
		for(int j = 0; j <2; j++){
			for(int k =0; k<2; k++){
				c[i][j] += a[i][k] * b[k][j];
				c[i][j] %= mod;
			}
		}
	}
	for(int i = 0; i < 2;i++){
		for(int j = 0; j< 2; j++){
			a[i][j] = c[i][j];
		}
	}
}

void mu(ll a[3][3],int n){
	if(n==1) return;
	mu(a,n/2);
	nhan(a,a);
	if(n%2==1) nhan(a,b);
}

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		a[0][1] = 1;
		a[1][0] = 1;
		a[1][1] = 0;
		
		b[0][0] = 1;
		b[0][1] = 1;
		b[1][0] = 1;
		b[1][1] = 0;
		mu(a,n);
		cout << a[1][0] << endl;
	}
}