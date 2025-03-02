#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		cin.ignore();
		string s,a;
		getline(cin,s);
		queue<int> q;
		a = "";
		for(int i = s.length()-1; i>=0; i--){
			if(s[i]==' '){
				if(a.length()>0){
					q.push(stoi(a));
					
				}
				a = "";
				continue;
			}
			if(s[i]>='0' and s[i] <= '9'){
				a =s[i] +a;
				continue;
			}
			int k;
			int x = q.front();
			q.pop();
			int y = q.front();
			q.pop();
			if(s[i]=='+'){
				k = x + y;
			}
			else if(s[i]=='-'){
				k =  y-x ;
			}
			else if(s[i]=='*'){
				k = x*y;
			}
			else if(s[i]=='/'){
				k = y/x;
			}
			q.push(k);
		}
		cout << q.front() << endl;
	}
	return 0;
}