#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n];
		for(int &x:a) cin >> x;
		sort(a,a+n);
		int l = 0,r=n-1;
		while(l<=r){
			if(l!=r)
			cout << a[r] <<" " << a[l] <<" ";
			else cout << a[l] <<" ";
			l++;
			r--;
		}
		cout << endl;
	}
}