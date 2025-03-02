#include<bits/stdc++.h>

using namespace std;

long long f[100];

void slove(){
	long long n,k;
	cin >> n >> k;
	while(n>2){
		if(k<=f[n-2]) n-=2;
		else{
			k -= f[n-2];
			n--;
		}
	}
	if(n==1) cout << '0' << endl;
	else cout << '1' << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int test; cin >> test;
	f[1] = f[2] = 1;
	for(int i = 3; i <=92;i++){
		f[i] = f[i-2] + f[i-1];
	}
	while(test--){
		slove();
	}
}