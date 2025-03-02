#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >>test;
	while(test--){
		int n; cin >> n;
		queue<string> q;
		q.push("9");
		while(1){
			string s = q.front();
			q.pop();
			long long x = stoll(s);
			if(x%n==0){
				cout << x << endl;
				break;
			}
			else{
				q.push(s+"0");
				q.push(s+"9");
			}
		}
	}
	return 0;
}