#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		string s; cin >> s;
		int ans = 0;
		stack<int> st;
		for(int i =0; i< s.length(); i++){
			if(s[i]=='('){
				st.push(i);
			}
			else{
				if(!st.empty()){
					ans += 2;
					st.pop();
				}
			}
		}
		cout << ans << endl;
	}
}