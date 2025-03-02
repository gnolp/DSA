#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin >> test;
	stack<int> st;
	string s;
	while(test--){
		cin.ignore();
		cin >> s;
		if(s=="PUSH"){
			int n; cin >> n;
			st.push(n);
		}
		else if(s=="PRINT"){
			if(!st.empty())
			cout << st.top();
			else cout <<"NONE";
			cout << endl;
		}
		else if(s=="POP"){
			if(!st.empty())
			st.pop();
		}
	}
	return 0;
}