#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		cin.ignore();
		string s; cin >> s;
		stack<int> st;
		for(int i = s.length()-1;i>=0;i--){
			if(isdigit(s[i])){
				st.push(s[i]-'0');
			}
			else{
				int b = st.top(); st.pop();
				int a = st.top(); st.pop();
				int res;
				if(s[i]=='*') {
					res = b*a;
				}
				else if(s[i]=='+'){
					res = b+a;
				}
				else if(s[i]=='-'){
					res = b-a;
				}
				else if(s[i]=='/'){
					res = b/a;
				}
				st.push(res);
			}
		}
		cout << st.top() << endl;
	}
}