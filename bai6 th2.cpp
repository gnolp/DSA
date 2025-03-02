#include<bits/stdc++.h>

using namespace std;

bool check(string s){
	int a[10]={};
	for(int i =0; i <s.length(); i++){
		if(s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='7'){
			a[s[i]-'0'] = 1;
		}
	}
	if(a[2] && a[3] && a[5] && a[7]) return true;
	return false;
}

int main(){
	int n; cin >> n;
	queue<string> q;
	q.push("2");
	q.push("3");
	q.push("5");
	q.push("7");
	while(1){
		string s = q.front();
		q.pop();
		if(s.length()<=n){
			if(s[s.length()-1]!='2' &&check(s))
			cout << s <<endl;
		} else if(s.length()>n) break;
		q.push(s+"2");
		q.push(s+"3");
		q.push(s+"5");
		q.push(s+"7");
	}
}