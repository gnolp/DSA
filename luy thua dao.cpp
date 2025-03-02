#include<bits/stdc++.h>

using namespace std;

long long mod = 1e9+7;

long long dao(long long a){
	long long tmp = 0;
	while(a){
		tmp = tmp*10+a%10;
		a/=10;
	}
	return tmp;
}

long long poww(long long n, long long k)
{
    if (k == 0)
        return 1;
    long long x = poww(n, k / 2);
    if (k % 2 == 0)
        return (x * x) % mod;
    else
        return (((x * x) % mod) * n) % mod;
}
int main(){
	int test; cin >> test;
	while(test--){
		long long a; cin >> a;
		cout <<poww(a,dao(a)) << endl;
	}
}