#include<bits/stdc++.h>

using namespace std;
int l, r;
int a[100000];
void sang(){
	for(int i =l; i <=r; i++){
		a[i-l] = 1;
	}
	a[1] = a[0] = 0;
	for(int i = 2; i*i<=r; i++){
		for(int j = max(i*i, (l+i-1)/i *i); j <= r; j+=i){
			a[j-l+1] = 0;
		}
	}
}
int main(){
	
	cin >> l>> r;
	sang();
	for(int i = l; i<r; i++){
		if(a[i-l+1]) cout << i <<" ";
	}
}