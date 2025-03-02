#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		string s;
		cin >> s;
		string tmp = "";
		for(int i = 0; i < s.length()-1; i++){
			tmp = tmp + s[i] + ".";
		}
		tmp += s[s.length()-1];
//		cout << tmp << endl;
		int m = 1;
		//a.b.c.b.a.d.d
		for(int i = 1; i<tmp.length(); i++){
			int d = 1;
			int len = 1;
			if(tmp[i]=='.') len = 0;
			while(i-d>=0 && i+d<tmp.length()&&tmp[i-d]==tmp[i+d]){
				if(tmp[i-d]!='.'){
					len += 2;
				}
				d++;
			}
			m = max(len,m);
		}
		cout << m << endl;
	}
}