#include<bits/stdc++.h>

using namespace std;
int a[1001];
int n;
void init(){
	for(int i =0; i <n; i++){
		a[i] = 0;
	}
}
void in(){
	cout <<"HA";
	for(int i =0 ; i <n; i++){
		if(a[i]==0) cout <<"A";
		else cout <<"H";
	}
	cout << endl;
}
bool check(){
	if(a[n-1]==1) return false;
	for(int i = 0; i <n; i++){
		if(a[i]==1&&a[i+1]==1) return false;
	}
	return true;
}
void sinh(){
	int i = n-1;
	while(a[i]==1) i--;
	a[i] = 1;
	for(int j = i+1; j <n; j++){
		a[j] = 0;
	}
	if(i>=0){
		if(check()) in();
		sinh();
	}
}

int main(){
	int test; cin>> test;
	while(test--){
		cin >> n;
		n-=2;
		if(n==0) cout <<"HA";
		else if(check()) in();
		sinh();
	}
	return 0;
}