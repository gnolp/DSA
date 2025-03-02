#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x:a) cin >> x;
	sort(a,a+n);
	if(n>2){
		int tmp1 = a[n-1]*a[n-2]*a[n-3];
		int tmp2 = a[n-1]*a[n-2];
		int tmp3 = a[0]*a[1]*a[2];
		int tmp4 = a[0]*a[1]*a[n-1];
		cout << max(tmp1,max(tmp2,max(tmp3,tmp4)));
	}
	else cout << a[0]*a[1];
}