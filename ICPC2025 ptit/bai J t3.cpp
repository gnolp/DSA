#include<bits/stdc++.h>

using namespace std;

int uper(int l, int r, int a[], int k){
	while(l < r){
		int m = (l+r) / 2;
		if(a[m] < k) l = m+1;
		else r = m-1;
	}
	return l;
}

int main(){
	int n; int c; cin >> n >> c;
	int a[n];
	for(int i = 0; i<n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	for(int x:a) cout <<x <<" ";
	cout << endl;
	for(int i = 0; i<n; i++){
		int temp = uper(0,n-1,a,c-a[i]);
		cout << temp <<" ";
	}
}