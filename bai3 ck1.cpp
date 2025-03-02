#include<bits/stdc++.h>

using namespace std;
int prime[100005];

void sang(){
	prime[0] = prime[1] = 0;
	for(int i = 2; i<= sqrt(100000); i++){
		if(!prime[i])
		for(int j = i; j<=100000; j+=i){
			prime[j] = i;
		}
	}
}
int sm[100005];
void s(){
	for(int i =1;i<=100000;i++){
		sm[i] = sm[i-1]+prime[i];
	}
}
int main(){
	sang();
	s();
	for(int i = 2;i<=30; i++){
		cout << prime[i] <<" ";
	}
	cout << endl;
	for(int i = 2; i<=30; i++){
		cout << sm[i] <<" ";
	}
	cout << endl;
	int l,r;
	cin >> l >> r;
	cout << sm[r] - sm[l-1] << endl;
	return 0;
	
}