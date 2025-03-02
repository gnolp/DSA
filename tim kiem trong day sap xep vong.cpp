#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n,k; cin >> n >> k;
		int a[n];
		int pos;
		for(int i =0;i < n; i++){
			cin >> a[i];
			if(a[i]==k) pos = i;
		}
		cout << pos+1 << endl;
	}
}