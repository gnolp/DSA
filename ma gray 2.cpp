#include<bits/stdc++.h>

using namespace std;
int n;

string np(int n,int k){
	string tmp ="";
	while(n){
		tmp =  to_string(1&n)+tmp;
		n = (n>>1);
	}
	while(tmp.length()!=k) tmp = "0"+tmp;
	return tmp;
}
int main(){
	int test; cin >> test;
	while(test--){
		string x; cin >> x;
		int n = x.length();
		int l =pow(2,n);
		string s[l+5];
		s[1] ='0';
		s[2] = '1';
		int vt = 2; // vi tri lay doi xung;
		for(int i =2; i<=n; i++){
			int k = pow(2,i);
			for(int j=1;j<=vt;j++){
				s[k-j+1] = "1"+s[j];
				s[j] = "0" + s[j];
			}
			vt = k;
		}
		int tmp;
		for(int j =1;j<=l; j++) if(x==s[j]) tmp = j-1;
		cout <<np(tmp,n);
		cout <<endl;
	}
}