#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		cin.ignore();
		string s; cin >> s;
		stack<string> st;
		for(int i = s.length()-1; i>=0; i--){
			if(isalpha(s[i])){
				string tmp = "";
				tmp += s[i];
				st.push(tmp);
//				cout << tmp <<" ";
			}
			else{
				string a = st.top();
				st.pop();
				string b = st.top();
				st.pop();
				string tmp = "";
				tmp += s[i];
				string temp = a + b + tmp;
//				cout << temp <<" ";
				st.push(temp);
			}
		}
		cout << st.top()<< endl;
	}
}