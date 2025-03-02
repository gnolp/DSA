#include<bits/stdc++.h>

using namespace std;
long long ucln(long long a, long long b){
	if(a==0) return b;
	return ucln(b%a,b);
}
int main(){
	long long a,b; cin >> a >> b;
	cout << ucln(a,b);
}