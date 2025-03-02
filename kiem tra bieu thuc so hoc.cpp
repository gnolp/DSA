#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		cin.ignore();
		string s; cin >> s;
		stack<char> st;
		bool ok = false;
		for(int i = 0;i<s.length(); i++){
            if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
                st.push(s[i]);
            if (s[i] == ')')
            {
                if (st.top() == '(')
                {
                    ok = 1;
                    break;
                }
                while (st.size() && st.top() != '(')
                    st.pop();
                st.pop();
            }
        }
        if (ok)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
	}
	return 0;
}