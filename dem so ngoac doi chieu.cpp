#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		cin.ignore();
		stack<char> st;
		string s; cin >> s;
		for(int i =0; i <s.size(); i++){
			if(st.empty()) st.push(s[i]);
			else{
				if(s[i]==')'&& st.top()=='('){
					st.pop();
				}
				else st.push(s[i]);
			}
		}
		int cnt = 0;
		while(!st.empty()){
			if(st.top()==')'){
				cnt += st.size()/2;
				break;
			}
			else{
				st.pop();
				if(st.top()=='('){
					cnt++;
					st.pop();
				} 
				else{
					st.pop();
					cnt+=2;
				}
				
			}
		}
		cout << cnt << endl;
	}
}