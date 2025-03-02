#include<bits/stdc++.h>
#define ll long long
using namespace std;


const int mod = 1e9 +7;

ll mu(ll a, ll b){
	if(b==0) return 1;
	if(b%2==0) return ((mu(a,b/2) * mu(a,b/2))%mod);
	return ((mu(a,b/2) * (mu(a,b/2))%mod * a%mod) % mod );
}

int main(){
	
	while(1){
		ll a, b;
		cin >> a >> b;
		if(a==0 && b==0) break;
		else cout << mu(a,b) << endl;
	}
}