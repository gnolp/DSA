#include<bits/stdc++.h>

using namespace std;

int n;
vector<long long> bit1, bit2;

void updatePoint(vector<long long>& b, int u, long long v) {
    int idx = u;
    while (idx <= n) {
        b[idx] += v;
        idx += (idx & (-idx));
    }
}

void updateRange(int l, int r, long long v) {
    updatePoint(bit1, l, (n - l + 1) * v);
    updatePoint(bit1, r + 1, -(n - r) * v);
    updatePoint(bit2, l, v);
    updatePoint(bit2, r + 1, -v);
}

long long getSumOnBIT(vector<long long>& b, int u) {
    int idx = u; 
	long long ans = 0;
    while (idx > 0) {
        ans += b[idx];
        idx -= (idx & (-idx));
    }
    return ans;
}

long long prefixSum(int u) {
    return getSumOnBIT(bit1, u) - getSumOnBIT(bit2, u) * (n - u);
}

long long rangeSum(int l, int r) {
    return prefixSum(r) - prefixSum(l - 1);
}

int main(){
    int q;
	cin >> n >> q;
	bit1.resize(n+2,0);
	bit2.resize(n+2,0);
	for(int i = 1; i <=n; i++){
	    int a;
		cin >> a;
		updateRange(i,i,a);
	}
	
	while(q--){
		int c;
		cin >> c;
		int u,v;
		long long x;
		if(c==1){
			cin >> u >> v >> x;
			updateRange(u,v,x);
		}
		else{
			cin >> u >> v;
			cout << rangeSum(u,v) << endl;
		}
	}
}