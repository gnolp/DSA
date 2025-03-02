#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	long long res =0 ;
	for(int i =0; i <n; i++){
		int x; cin >> x;
		if(x>0)
		res += 2*x;
	}
	cout << res << endl;
}