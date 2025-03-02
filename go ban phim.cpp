#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	getline(cin,s);
	stack<string> st;
	stack<string> t;
	string ans ="";
	for(int i = 0; i<s.length(); i++){
		if(s[i]=='<'){
			if(!st.empty()){
				t.push(st.top());
				st.pop();
			}
		}
		else if(s[i]=='>'){
			if(!t.empty()){
				st.push(t.top());
				t.pop();
			}
		}
		else if(s[i]=='-'){
			if(!st.empty()){
				st.pop();
			}
		}
		else{
			string tmp ="";
			tmp+= s[i];
			st.push(tmp);
		}
	}
	while(!st.empty()){
		ans = st.top() + ans;
		st.pop();
	}
	while(!t.empty()){
		ans = t.top() + ans;
		t.pop();
	}
	cout << ans;
}