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
	for(int i =0 ; i <n; i++){
		if(a[i]==0) cout <<"A";
		else cout <<"B";
	}
	cout <<" ";
}
void sinh(){
	int i = n-1;
	while(a[i]==1) i--;
	a[i] = 1;
	for(int j = i+1; j <n; j++){
		a[j] = 0;
	}
	if(i>=0){
		in();
		sinh();
	}
}
int main(){
	int test; cin>> test;
	while(test--){
		cin >> n;
		in();
		sinh();
		cout << endl;
	}
	return 0;
}