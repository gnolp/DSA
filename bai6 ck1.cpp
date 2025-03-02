#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >>test;
	while(test--){
		int n; cin >> n;
		cin.ignore();
		string s;
		stack<long long> st;
		for(int i =0; i<n; i++){
			cin >> s;
			if(s!= "+" and s!="-" and s!="*" and s!="/"){
				st.push(stoll(s));
			}
			else{
				long long x = st.top();
				st.pop();
				long long y = st.top();
				st.pop();
				long long tmp;
				if(s =="-") tmp = y-x;
				else if(s=="+") tmp = y+x;
				else if(s=="*") tmp = y*x;
				else tmp = y/x;
				st.push(tmp);
			}
		}
		cout << st.top() << endl;	
	}
}