#include<bits/stdc++.h>

using namespace std;


int main(){
	int test; cin >> test;
	while(test--){
		int n,k; cin >> n;
		k = 3;
		long long d[n+5]= {};
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
				d[i] +=d[j];
//				cout << d[i] <<" ";
			}
//			cout << endl;
		}
		cout << d[n] << endl;
	}
}
