#include<bits/stdc++.h>

using namespace std;
// bit dau tien cua xau np = gray;

int n;

int a[1001];
void chuyen_gray_bina(string s){
	cout << s[0];
	for(int i =1; i <s.length(); i++){
		if(s[i]==s[i-1]) cout << 0;
		else cout <<1;
	}
}
string chuyen_bina_gray(string s){
	for(int i =1; i <s.length();i++){
		if(s[i]=='0') s[i] = s[i-1];
		else{
			if(s[i-1]=='1') s[i] ='0';
			else s[i] = '1';
		}
	}
	return s;
}
int main(){
	string s; cin >> s;
//	chuyen_gray_bina(s);
	cout << chuyen_bina_gray(s);
}