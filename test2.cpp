#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		int n; cin >> n;
		bool ok = true;
		while(n > 0){
			if((n%10) % 2 !=0){
				cout << "No\n";
				ok = false;
				break;
			}
			n /= 10;
		}
		if(ok){
			cout << "Yes\n";
		}
	}
}