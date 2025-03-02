#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int k; cin >> k;
		string s; cin >> s;
		int a[30] ={};
		for(int i = 0; i<s.length(); i++){
			a[s[i]-'A']++;
		}
		priority_queue<int> q;
		for(int i =0; i<26; i++) q.push(a[i]);
		while(k--){
			int x = q.top();
			q.pop();
			q.push(x-1);
		}
		long long ans = 0;
		while(!q.empty()){
			int x = q.top();
			ans += (long long)x*x;
			q.pop();
		}
		cout << ans << endl;
	}
}