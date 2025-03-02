#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	cin.ignore();
	while(test--){
		string s;
		getline(cin,s);
		stack<int> st;
		int cnt = 1;
		int tmp = cnt;
		for(int i =0; i <s.length(); i++){
			if(s[i]=='('){
				cout << cnt <<" "; 
				st.push(cnt);
				cnt++;
			}
			else if(s[i]==')'){
				cout << st.top() <<" ";
				st.pop();
			}
		}
		cout << endl;
	}
}