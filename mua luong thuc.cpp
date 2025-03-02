#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n,s,m;
		cin >> n >> s >> m;
		if(s*m>(s-s/7)*n) cout << -1 << endl;
		else{
			cout << (m*s+n-1)/n << endl;
		}
	}
}