#include<bits/stdc++.h>

using namespace std;

int main(){
	int test = 1;
	while(test--){
		long long n, k; cin >> n >> k;
		
		long long cnt = 0;
		for(int i = 0; i<=n; i++){
			for(int j = 0; j<=n; j++){
				if(k-i-j >= 0 && (k-i-j) <= n){
					cnt++;
				}
				
			}
		}
		cout << cnt << endl;
	}
}