#include<bits/stdc++.h>

using namespace std;


int main(){
	int test; cin >> test;
	while(test--){
		cin.ignore();
		string s; cin >> s;
		int len = s.length();
		int i = len-1;
		while(s[i]=='1'){
			i--;
		}
		if(i<0){
			for(int j = 0; j< len; j++){
				cout << 0;
			}
			cout << endl;
		}
		else{
			s[i] = '1';
			for(int j = i+1; j <len; j++){
				s[j] = '0';
			}
			for(int j= 0; j < len;j++){
				cout << s[j];
			}
			cout << endl;
		}
	}
}