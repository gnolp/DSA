#include<bits/stdc++.h>

using namespace std;

int check(long long n,long long a){
	string s = to_string(n);
	int i = s.length();
	while(i>=0){
		if(s[i]-'0'==a%10){
			a /=10;
		}
		i--;
	}
	if(a!=0) return 0;
	return 1;
}

int main(){
	int test; cin >> test;
	while(test--){
		long long n;
		cin >> n;
		bool ok = false;
		long long a = cbrt(n);
		long long x = -1;
		for(long long i = a; i >0; i--){
			if(check(n,i*i*i)){
				x = max(x,i*i*i);
				ok = true;
			}
		}
		if(!ok) cout << -1 << endl;
		else{
			cout << x << endl;
		}
	}
}