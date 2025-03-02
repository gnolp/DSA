#include<bits/stdc++.h>

using namespace std;

long long mod = 1e9+7;
long long p[1005][1005];
int n,k;

void pnk(){
	for (int i = 1; i <= 1000; ++i) {
        p[i][1] = i;
    }
    for (int i = 2; i <= 1000; ++i) {
        for (int j = 2; j <= i; ++j) {
            p[i][j] = i * p[i - 1][j - 1] % mod;
        }
    }
}

int main(){
	pnk();
	
	int test; cin>> test;
	while(test--){
		cin>> n>> k;
		
		if(k>n){
			cout << 0 << endl;
		}
		else{
			cout<< p[n][k] << endl;
		}
	}
}