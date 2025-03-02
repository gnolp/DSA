#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	cin.ignore();
	while(test--){
		
		string s;
		getline(cin,s);
//		cin >> s;
		stack<char> st;
		int cnt = 0;
		int ans = 0;
		for(int i = 0; i <s.length(); i++){
			if(s[i]=='('){
				st.push(s[i]);
	//			cout << s[i] << i;
			}
			else{
				if(s[i]==' ') cnt ++;
				else  if(st.empty()){
					ans = max(ans,cnt);
					cnt = 0;
	//				cout << ans << endl;
				}
				else{
	//				cout << s[i] << i;
					st.pop();
					cnt += 2;
				}
			}
		}
		ans = max(ans,cnt);
		cout << ans << endl;
	}
	return 0;
}