#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int b = n/7;
//		cout << b << endl;
		int a;
		int x;
		bool ok = false;
		for(int i = b; i>=0; i--){
			int tmp = (n - 7*i);
			if(tmp%4==0){
				a = tmp/4;
//				cout << a << endl;
				x = i;
				ok = true;
				break;
			}
		}
		if(ok){
			for(int i = 0;i < a; i++) cout << 4;
			for(int i = 0; i <x; i++) cout << 7;
			cout << endl;
		}
		else cout << -1 << endl;
	}
}