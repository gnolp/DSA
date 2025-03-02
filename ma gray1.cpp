#include<bits/stdc++.h>

using namespace std;
int n;
int main(){
	int test; cin >> test;
	while(test--){
		cin >>n;
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
		for(int j =1;j<=l; j++) cout << s[j] << " ";
		cout << endl;
	}
}