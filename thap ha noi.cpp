#include<bits/stdc++.h>

using namespace  std;

void chuyen(int n, char a, char b){
	cout << a <<" -> " << b;
	cout << endl;
}

void thapHN(int n, char a, char b, char c){
	if(n==1) chuyen(1,a,c);
	else{
		thapHN(n-1,a,c,b);
		chuyen(n,a,c);
		thapHN(n-1,b,a,c);
	}
}
int main(){
	int n;
	cin >> n;
	thapHN(n,'A','B','C');
}