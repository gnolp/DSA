#include<bits/stdc++.h>

using namespace std;


int main(){
	int test; cin >>test;
	while(test--){
		long long n; cin >> n;
		queue<string> q;
		q.push("1");
		long long cnt = 0;
		while(1){
			string s = q.front();
			q.pop();
			if(stoll(s)<=n){
				cnt++;
				q.push(s+"0");
				q.push(s+"1");
			}
			else break;
		}
		cout << cnt  << endl;
	}
}