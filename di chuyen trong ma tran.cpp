#include<bits/stdc++.h>

using namespace std;

long long a[1001][1001];
int mod = 1e9+7;
void sang(){
	for(int i =0; i<= 1000; i++){
		for(int j =0; j<=i; j++){
			if(j==0 || j==i) a[i][j] = 1;
			else {
				a[i][j] = a[i-1][j-1] + a[i-1][j];
			}
		}
	}
}
int main(){
	int test; cin >> test;
	sang();
	while(test--){
		int n,m;
		cin >> n >>m;
		for(int i =0; i <n; i++){
			for(int j=0; j <m; j++){
				int x; cin >>x;
			}
		}
		
		cout << a[n+m-2][n-1] << endl;
	}
}