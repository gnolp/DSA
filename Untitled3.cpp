#include<bits/stdc++.h>

using namespace std;

#define int long long

int sumNumber(int n){
	int t = 0;
	while(n > 0){
		t += n%10;
		n /=10;
	}
	return t;
}
bool snt(int n){
	if(n< 2) return false;
	if(n%2==0) return false;
	if(n==2 ) return true;
	for(int i = 3; i <= sqrt(n); i+= 2){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,s;
		cin >> n >> s;
		if(sumNumber(n) == s && snt(n)){
			cout << "Yes\n";
		}
		else cout <<"No\n";
	}
	return 0;
}