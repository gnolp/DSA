#include<bits/stdc++.h>

using namespace std;

bool check(long long x){
	long long y = sqrt(x);
	return y*y == x;
}


int main(){
	int a; cin >> a;
	long long a2 = 2LL*a*a;
	for(int b = 1; b<=100000; b++){
		if(b==a) break;
		long long c2 = a2 - 1LL*b*b;
		if(c2 <= 0) continue;
		long long c = sqrt(c2);
		if(c*c == c2 && c!=b && a!= c && c!=b ){
			cout <<"YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}