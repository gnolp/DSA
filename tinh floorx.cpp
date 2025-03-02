#include<bits/stdc++.h>

using namespace std;
int find(int a[],int l,int r,int k){
	int res = -1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m]<=k){
			res = m;
			l = m+1;
		}
		else if(a[m]>=k){
			r = m-1;
		}
	}
	return res;
}
int main(){
	int test; cin >> test;
	while(test--){
		int n,x; cin >> n>>x;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		if(find(a,0,n-1,x)!=-1)
		cout << find(a,0,n-1,x) +1 << endl;
		else cout << -1 << endl;
	}
}