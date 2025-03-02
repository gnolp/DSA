#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n+5];
		int m =INT_MIN;
		for(int i =1;  i  <=n; i++){
			cin >> a[i];
		}
		int d[n];
		d[0] = 0;
//		cout << d[0] <<" ";
		for(int i = 1; i<=n; i++){
			d[i] = d[i-1] + a[i];
			cout << d[i] <<" ";
		}
		for(int i = 1;i <=n; i++){
			for(int j = i; j <=n; j++){
				m= max(d[j]-d[i-1],m);
			}
		}
		cout <<m << endl;
	}
}