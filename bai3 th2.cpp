#include<bits/stdc++.h>

using namespace std;

string dao(string s){
	string tmp ="";
	for(int i = s.length()-1; i>=0;i--){
		tmp += s[i];
	}
	return tmp;
}

int main(){
	int test; cin >> test;
	while(test--){
		int n;
		cin >> n;
		int cnt = 0;
		queue<string> q;
		q.push("6");
		q.push("8");
		while(1){
			string s = q.front();
			q.pop();
			if(cnt == n) break;
			else{
				string tmp = s;
				tmp += dao(tmp);
				cout << tmp <<" ";
				cnt++;
			}
			q.push(s+"6");
			q.push(s+"8");
		}
		cout << endl;
	}
}