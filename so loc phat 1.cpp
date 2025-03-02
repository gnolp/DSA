#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		queue<string> q;
		q.push("6");
		q.push("8");
		stack<string> st;
		while(1){
			string s = q.front();
			q.pop();
			if(s.length()<=n){
				st.push(s);
			}
			else break;
			q.push(s+"6");
			q.push(s+"8");
		}
		while(!st.empty()){
			cout << st.top() <<" ";
			st.pop();
		}
		cout << endl;
	}
}