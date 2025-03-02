#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		cin.ignore();
		string s; cin >> s;
	
		if(s[0]==']'||s[0]==')'||s[0]=='}'){
			cout << "NO" << endl;
		}
		else{
			bool ok = true;
			stack<char> st;
			for(int i = 0; i < s.length(); i++){
				if(s[i]=='['||s[i]=='('|| s[i]=='{'){
					st.push(s[i]);
				}
				else{
					if(st.empty()){
						cout << "NO" << endl;
						ok = false;
						break;
					}
					if((st.top()=='['&&s[i]==']')|| (st.top()=='{'&&s[i]=='}')||(st.top()=='('&&s[i]==')')){
						st.pop();
					}
					else {
						cout <<"NO" << endl;
						ok = false;
						break;
					}
				}
			}
			if(ok) cout << "YES" << endl;
		}
	}
}