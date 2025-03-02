#include<bits/stdc++.h>

using namespace std;

int snt(int n){
	if(n<2) return 0;
	if(n==2) return 1;
	if(n%2==0) return 0;
	for(int i = 3; i <= sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
long long hh[100];
int cnt = 0;
void sang(){
	for(int i=2; i<32; i++){
		if(snt(i)){
			int  tmp = (int)pow(2,i)-1;
			if(snt(tmp)){
				hh[cnt++] = 1ll* (int) pow(2,i-1) * tmp;
			}
		}
	}
}
int main(){
	sang();
}