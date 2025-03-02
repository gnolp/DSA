#include<bits/stdc++.h>

using namespace std;
int n;

int np(string s){
	int tmp = 0;
	for(int i =n-1; i>=0;i--){
		if(s[i]=='1'){
			tmp += pow(2,n-i-1);
		} 
	}
	return tmp;
}
int main(){
	int test; cin >> test;
	while(test--){
		string x; cin >> x;
		n = x.length();
		int tmp = np(x);
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
		cout << s[tmp+1];
		cout << endl;
	}
}