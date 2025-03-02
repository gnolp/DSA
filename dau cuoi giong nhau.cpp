#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;cin >> s;
	int a[256]={};
	for(int i =0; i< s.length(); i++){
		a[s[i]]++;
	}
	int cnt =s.length();
	for(int i =0; i<256; i++){
		cnt += a[i]*(a[i]-1) / 2;
	}
	cout << cnt << endl;
}