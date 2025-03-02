#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n,k; cin >> n >> k;
		int a[n];
		for(int &x:a) cin >> x;
		if(binary_search(a,a+n,k)) cout << 1 << endl;
		else cout << -1 << endl;
	}
}