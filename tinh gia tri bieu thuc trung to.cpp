#include<bits/stdc++.h>

using namespace std;

int dut(char a){
	if(a=='*' or a=='/') return 5;
	if(a=='+' or a=='-') return 3;
	if(a=='(') return 0;
	return 1;
}
bool cmp(char a, char b){
	return dut(a) <= dut(b);
}
// 6*3+2-(6-4/2)
int main(){
	int test; cin >> test;
	while(test--){
		string s; cin >> s;
		long long tmp =0;
		stack<char> dau;
		stack<long long> so;
		for(int i =0; i<s.length(); i++){
			if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/' or s[i]==')' or s[i]=='('){
				if(tmp!=0){
					so.push(tmp);
//					cout << tmp << endl;
					tmp = 0;
				}
				while(!dau.empty() and (s[i]!='(' && cmp(s[i],dau.top()))){
					char c = dau.top();
					dau.pop();
					if(so.size()>=2 and (c!='(' and c!=')')){
						int a = so.top();
						so.pop();
						int b = so.top();
						so.pop();
						int x = 0;
						if(c=='+') x = a+b;
						else if(c=='-') x = b-a;
						else if(c=='*') x = b*a;
						else if(c=='/') x = b/a;
//						cout << x << "," << endl;
						so.push(x);
					}
				}
//				cout << s[i] << endl;
				dau.push(s[i]);
			}
			else{
				tmp = tmp*10 + s[i]-'0';
			}
		}
		if(tmp!=0) so.push(tmp);
		while(!dau.empty()){
			char c = dau.top();
			dau.pop();
			if(so.size()>=2 and (c != '(' && c!=')')){
				long long a = so.top();
				so.pop();
				long long b = so.top();
				so.pop();
				long long x = 0;
				if(c=='+') x = a+b;
				else if(c=='-') x = b-a;
				else if(c=='*') x = b*a;
				else if(c=='/') x = b/a;
				so.push(x);
			}
		}
		cout << so.top() << endl;
	}
	return 0;
}