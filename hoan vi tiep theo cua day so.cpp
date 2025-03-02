#include<bits/stdc++.h>

using namespace std;
void in(int a[], int n){
	for(int i =0; i <n; i++){
		cout << a[i];
	}
}
int main(){
	int test; cin >> test;
	for(int i =1; i<= test; i++){
		int m; cin >>m;
		cin.ignore();
		string x; cin >> x;
		int a[81];
		for(int j=0; j <x.length(); j++){
			a[j] = x[j]-'0';
		}
		cout << m <<" ";
		if(next_permutation(a,a+x.length())) in(a,x.length());
		else cout <<"BIGGEST";
		cout << endl;
	}
}