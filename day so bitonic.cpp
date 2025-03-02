#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n],b[n],c[n];
		for(int i =0; i<n; i++){
			cin >> a[i];
			b[i] = a[i];
			c[i] = a[i];
		}
		for(int i =1; i<n; i++){
			for(int j =0; j<i; j++){
				if(a[i] > a[j]){
					b[i] = max(b[i],b[j]+a[i]);
				}
			}
		}
		for(int i =n-2; i>=0; i--){
			for(int j =n-1; j>i; j--){
				if(a[i] > a[j]){
					c[i] = max(c[i],c[j]+a[i]);
				}
			}
		}
		int m = 0;
		for(int i = 0; i < n; i++){
			m= max(c[i]+b[i]-a[i],m);
		}
		cout << m << endl;
	}
}