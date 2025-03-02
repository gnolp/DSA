#include<bits/stdc++.h>

using namespace std;
int a[1001];
int n,k;
void init(){
	for(int i =0; i <n; i++){
		a[i] = 0;
	}
}
void in(){
	for(int i =0 ; i <n; i++){
		cout << a[i];
	}
//	cout <<" ";
}
bool check(){
	int cnt =0;
	for(int i = 0; i <n; i++){
		if(a[i]==1) cnt++;
	}
	if(cnt==k) return true;
	return false;
}
void sinh(){
	int i = n-1;
	while(a[i]==1) i--;
	a[i] = 1;
	for(int j = i+1; j <n; j++){
		a[j] = 0;
	}
	if(i>=0){
		if(check()){
			in();
			cout << endl;
		}
		sinh();
	}
}
int main(){
	int test; cin>> test;
	while(test--){
		cin >> n >> k;
		if(check()) in();
		sinh();
//		cout << endl;
	}
	return 0;
}