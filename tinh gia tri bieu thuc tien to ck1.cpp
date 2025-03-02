#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		string s[n];
		for(int i =0; i<n; i++){
			cin >> s[i];
		}
		stack<long long > st;
		for(int i = n-1; i>=0; i--){
			if(s[i]=="+" or s[i]=="-" or s[i]=="*" or s[i]=="/"){
				long long a = st.top();
				st.pop();
				long long b = st.top();
				st.pop();
				long long tmp;
				if(s[i]=="+") tmp = a+b;
				else if(s[i]=="-") tmp = a-b;
				else if(s[i]=="*") tmp = a*b;
				else tmp = a/b;
				st.push(tmp);
			}
			else{
				st.push(stoll(s[i]));
			}
		}
		cout << st.top() <<endl;
	}
}