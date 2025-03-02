#include<bits/stdc++.h>

using namespace std;

bool snt(long long n){
	if(n<2) return false;
	if(n==2) return true;
	if(n&1==0) return false;
	for(int i =3; i <=sqrt(n); i+= 2){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	long long n; cin >> n;
	if(snt(n)) cout <<"yes";
	else cout <<"no";
	return 0;
}