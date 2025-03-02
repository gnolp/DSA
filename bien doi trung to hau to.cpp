#include<bits/stdc++.h>

using namespace std;

int prio(char a){
	if(a=='^') return 5;
	if (a=='*' || a== '/') return 4;
	if(a=='+' || a=='-') return 3;
	return 1;
}

int main(){
	int test; cin >> test;
	while(test--){
		cin.ignore();
		string s; cin >> s;
	    string res = "";
	    stack<char> st;
	    for (int i = 0; i < s.length(); ++i) {
	        if (s[i] == '(') st.push(s[i]);
	        else if (s[i] == ')') {
	            while (st.top() != '(') {
	                res += st.top();
	                st.pop();
	            }
	            st.pop();
	        }
	        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^') {
	            while (!st.empty() && prio(st.top()) >= prio(s[i])) {
	                res += st.top();
	                st.pop();
	            }
	            st.push(s[i]);
	        }
	        else res += s[i];
	    }
	    while (!st.empty()) {
	        if (st.top() != '(') res += st.top();
	        st.pop();
	    }
	    cout << res << endl;
	}
}