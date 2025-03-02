#include<bits/stdc++.h>

using namespace std;

void add(string a, string b, int k){
	while(a.length()<b.length()){
		a = "0" + a;
	}
	while(b.length() < a.length()){
		b = "0" + b;
	}
	string c ="";
	int du = 0;
	for(int i = a.length()-1; i >=0; i--){
		int dg = (a[i] -'0' + b[i] -'0')%k + du;
		c = char(dg%k+'0') + c;
		du = dg/k;
	}
	if(du>0) c = char(du+'0') + c;
	cout << c << endl;
}

int main(){
	int test; cin >> test;
	while(test--){
		int k; cin >> k;
		string s1, s2;
		cin >> s1 >> s2;
		add(s1,s2,k);
	}
}