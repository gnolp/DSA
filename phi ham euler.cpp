#include<bits/stdc++.h>

using namespace std;

int prime[100000];

void sang(){
	for(int i =0;i <100000; i++){
		prime[i] = i;
	}
	for(int i = 2;i<=sqrt(100000); i++){
		if(prime[i]==i){
			for(int j = i*i; j<100000; j+=i){
				prime[j] = i;
			}
		}
	}
}
int phih(int n){
	int cnt = n;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i==0){
			cnt = cnt - cnt/i;
		}
		while(n%i==0) n/=i;
	}
	if(n>1) cnt -= cnt/n;
	return cnt;
}

int main(){
	int n; cin >>n;
	sang();
	cout << phih(n);
}