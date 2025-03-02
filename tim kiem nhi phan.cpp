#include<bits/stdc++.h>

using namespace std;

int binarySearch(int a[],int l,int r,int k){
	if(l<=r){
		int mid = (r+l)/2;
		if(a[mid]==k) return mid+1;
		if(a[mid] > k) return binarySearch(a,l,mid-1,k);
		else return binarySearch(a,mid+1,r,k);
	}
	else return 0;
}

int main(){
	int test;
	cin >> test;
	while(test--){
		int n,k;
		cin >> n >> k;
		int a[n];
		bool ok = false;
		int pos;
		for(int i = 0; i <n; i++){
			cin >> a[i];
			if(a[i]==k){
				ok = true;
				pos = i;
			}
		}
		if(ok) cout <<pos+1<< endl;
		else cout <<"NO" << endl;
//		int tmp = binarySearch(a,0,n-1,k);
//		if(tmp) cout << tmp << endl;
//		else cout << "NO" << endl;
	}
}