#include<bits/stdc++.h>

using namespace std;


long long fb[100];

void display(){
	long long n,k;
	cin >> n >> k;
	while(n > 2){
		if(k <= fb[n-2]) n-=2;
		else{
			k -= fb[n-2];
			n--;
		}
	}
	if(n==1) cout <<'A' << endl;
	else cout <<'B' << endl;
}

int main(){
	int test; cin >> test;
	fb[1] = fb[2] = 1;
	for(int i = 3; i <=92; i++){
		fb[i] = fb[i-2] + fb[i-1];
	}
	while(test--){
		
		display();
	}
}