#include<bits/stdc++.h>

using namespace std;

long long a[1001][1001];
int mod = 1e9+7;
void sang(){
	for(int i =0; i<= 1000; i++){
		for(int j =0; j<=i; j++){
			if(j==0 || j==i) a[i][j] = 1;
			else {
				a[i][j] = (a[i-1][j-1]%mod + a[i-1][j]%mod) %mod;
			}
		}
	}
}

int main(){
	sang();
	int test; cin >> test;
	while(test--){
		int k,n; cin >> n >> k;
		cout << a[n][k] << endl;
	}
	return 0;
}
