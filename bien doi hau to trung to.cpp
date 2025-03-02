#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		cin.ignore();
		string s; cin >> s;
		stack<string> st;
		for(int i = 0;i<s.length();i++){
			if(isalpha(s[i])){
				string tmp ="";
				tmp+=s[i];
				st.push(tmp);
			}
			else{
				string a = st.top();
				st.pop();
				string b = st.top();
				st.pop();
				string tmp = "";
				tmp += s[i];
				string temp = "("+b + tmp + a +")";
				st.push(temp);
			}
		}
		cout << st.top() << endl;
	}
}