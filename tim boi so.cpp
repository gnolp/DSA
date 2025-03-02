#include<bits/stdc++.h>

using namespace std;
int n = 13;
int a[1001];
void init(){
	for(int i = 0; i <n;i++){
		a[i]=0;
	}
}
vector<long long> v;
void chuyen(){
	long long tmp =0;
	int b[100];
	for(int i=0; i <n; i++){
		if(a[i]) b[i] = 9;
		else b[i] = 0;
	}
	for(int i =0; i <n; i++){
		tmp = tmp*10 +b[i];
	}
	v.push_back(tmp);
}
void in(){
	for(int i =0; i <n; i++){
		cout << a[i];
	}
	cout <<" ";
}
void sinh(){
	int i = n-1;
	while(a[i]==1) i--;
	if(i>=0){
		a[i]=1;
		for(int j =i+1; j <n;j++){
			a[j] = 0;
		}
//		in();
		chuyen();
		sinh();
	}
}

int main(){
	int test; cin >> test;
	init();
	sinh();
	long long m;
//	int cnt =0;
	while(test--){
		cin >>m;
		for(auto x:v) if(x%m==0){
			cout << x << endl;
			break;
		}
	}
	return 0;
}