#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n,m; cin >> n >> m;
		int a[n+m];
		for(int&x:a) cin >> x;
		sort(a,a+n+m);
		for(int x:a) cout << x <<" ";
		cout << endl;
	}
}