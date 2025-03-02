#include<bits/stdc++.h>

using namespace std;

int a[200005];
int n;
int t[4*200005];

void build(int v, int l , int r){
	if(l==r){
		t[v] = a[l];
		return;
	}
	int m = (l+r)/2;
	build(2*v,l,m);
	build(2*v+1,m+1,r);
	t[v] = t[2*v] + t[2*v+1];
}

int main(){
	cin >> n;
	for(int i =0; i<n; i++) cin >> a[i];
	build(1,0,n-1);
	for(int i =0; i<20; i++) cout << t[i] <<" ";
}