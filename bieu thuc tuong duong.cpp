#include<bits/stdc++.h>


using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		string s; cin >> s;
		string s1 = s;
		stack<int> last_index;
		bool ok = false;
		for(int i =0; i <s.length();i++){
			if(ok){
				if(s[i]=='-') s[i] = '+';
				else if(s[i]=='+') s[i] = '-';
			}
			if(s[i]=='-'&& s[i+1]=='('){
				ok = 1;
				last_index.push(i);
			}
			else if(s[i]=='+'&& s[i+1]=='('){
				last_index.push(i);
				ok = 0;
			} 
			if(s[i]==')'&& !last_index.empty() &&s[last_index.top()]!=s1[last_index.top()]){
				last_index.pop();
				ok = 1;
			}
			else if(s[i]==')'&& !last_index.empty() &&s[last_index.top()]==s1[last_index.top()]) ok = 0;
		}
		for(int i = 0; i <s.length(); i++){
			if(s[i]!='(' && s[i]!=')') cout << s[i];
		}
		cout << endl;
	}
}