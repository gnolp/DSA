#include<bits/stdc++.h>

using namespace std;

long long mod = 1e9+7;
bool cmp(long long a, long long b){
	return a < b;
}
int main(){
	int test; cin >> test;
	while(test--){
		long long n; cin >> n;
		long long x;
		priority_queue<long long, vector<long long>, greater<long long>> pq;
		for(int i =0; i <n; i++){
			cin >> x;
			pq.push(x);
		}
		long long res = 0;
		while(pq.size()>1){
			long long top1 = pq.top();
			pq.pop();
			long long top2 = pq.top();
			pq.pop();
			res = (res%mod + (top2%mod + top1%mod)%mod)%mod;
			pq.push((top2%mod + top1%mod)%mod);
//			cout << res << endl;
		}
		cout << res << endl;
	}
}