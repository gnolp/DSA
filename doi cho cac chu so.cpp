#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		string s; cin >> s;
		for(int i =0; i < s.length(); i++){
			if(n==0) break;
			char c ='0';
			for(int j = i+1; j< s.length(); j++){
				c= max(c,s[j]);
			}
			if(c<=s[i]) continue;
			string tmp = s;
			for(int j = i+1; j<s.length(); j++){
				if(s[j]==c){ // neu co nhieu gia tri s[j] ==c thi thu tung gia tri 1 de tim max.
					string temp = s;
					swap(temp[j],temp[i]);
					tmp = max(temp,tmp);
				}
			}
			s=tmp;
			n--;
		}
		cout << s<< endl;
	}
	return 0;
}