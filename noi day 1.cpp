#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		long long x;
		priority_queue<long long, vector<long long>, greater<long long>> p;
		for(int i = 0; i <n; i++){
			cin >> x;
			p.push(x);
		}
		long long res = 0;
		while(p.size()>1){
			long long a = p.top(); p.pop();
			long long b = p.top(); p.pop();
			res += a+b;
			p.push(a+b); 
		}
		cout << res << endl;
	}
}