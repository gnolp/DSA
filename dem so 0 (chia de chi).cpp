#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i =0; i <n; i++){
		cin >> a[i];
	}
	int l = 0;
	int r = n-1;
	while(l<=r){
		if(a[r]==0){
			cout << r+1;
			return 0;
		}
		else r--;
	}
	cout << 0;
}