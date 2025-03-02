#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	cin.ignore();
	while(test--){
		string s;
		getline(cin,s);
		string word;
		stack<string> st;
		stringstream ss(s);
		while(ss>>word){
			st.push(word);
		}
		while(!st.empty()){
			cout << st.top() <<" ";
			st.pop();
		}
		cout << endl;
	}
}