#include<bits/stdc++.h>

using namespace std;

string add(string s1,string s2){
	while(s1.length()<s2.length()){
		s1 =  "0" + s1;
	}
	while(s2.length()<s1.length()){
		s2 = "0" + s2;
	}
	int du =0;
	string c ="";
	for(int i = s1.length()-1;i >=0; i--){
		int dg = s1[i] -'0' + s2[i] -'0' + du;
		c = char(dg%2+'0') + c;
		du = dg/2;
	}
	return c;
}
//0101
long long ans(string s){
	long long temp = 0;
	for(int i = s.length()-1; i>=0; i--) if(s[i]=='1'){
		temp += pow(2,s.length()-1-i);
	}
	return temp;
}

void mul(string a, string b){
	if(a.length()>b.length()){
		string tmp = a;
		a = b;
		b = tmp;
	}
//	cout << a << " " << b << endl;
	string keys = "";
	for(int i = a.length()-1; i>=0; i--){
		if(a[i]=='1'){
			int tmp = i;
			string s = b;
			while(tmp<a.length()-1){
				s = s + "0";
//				cout << s << endl;
				tmp ++;
			}
			keys = add(keys,s);
		}
//		cout << keys <<" " << ans(keys) << endl;;
	}
	cout << ans(keys) << endl;
}

int main(){
	int test; cin >> test;
	while(test--){
		string s1,s2;
		cin >> s1 >> s2;
		cout << ans(s1) * ans(s2) << endl;
	}
}