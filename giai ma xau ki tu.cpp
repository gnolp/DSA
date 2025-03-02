#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		cin.ignore();
		string s; cin >> s;
		stack<string> st;
		for(int i = s.length()-1; i >=0; i--){
			if(!isdigit(s[i])){
				string t ="";
				t += s[i];
				st.push(t);
			}
			else {
				string so ="";
				while(i>=0 &&isdigit(s[i])){
					so = s[i] + so;
//					cout << so << endl;
					i--;
				}
				int n = stoi(so);
//				cout<< n << endl;
				string t ="";
				while(!st.empty() && st.top()!= "]"){
					if(st.top()!="[")	t += st.top();
					st.pop();
				}
//				cout << t << endl;
				string temp = t;
				for(int j = 0 ; j < n-1; j++){
					t +=temp;
				}
//				cout << t << endl;
				st.pop();
				st.push(t);
				i++;
			}
		}
		cout << st.top() << endl;
	}
}