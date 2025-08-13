#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAXN = 1e5 + 5;

int n, q;
vector<ll> bit1(MAXN, 0), bit2(MAXN, 0);

// Cập nhật điểm trong BIT
void update(vector<ll>& bit, int i, ll val) {
    while (i <= n) {
        bit[i] += val;
        i += (i & -i);
    }
}

// Lấy tổng từ 1 đến i
ll get(vector<ll>& bit, int i) {
    ll res = 0;
    while (i > 0) {
        res += bit[i];
        i -= (i & -i);
    }
    return res;
}

// Cập nhật đoạn [l..r] += val
void range_update(int l, int r, ll val) {
    update(bit1, l, val);
    update(bit1, r + 1, -val);
    update(bit2, l, val * (l - 1));
    update(bit2, r + 1, -val * r);
}

// Lấy tổng từ 1 đến i
ll prefix_sum(int i) {
    return get(bit1, i) * i - get(bit2, i);
}

// Lấy tổng từ u đến v
ll range_sum(int l, int r) {
    return prefix_sum(r) - prefix_sum(l - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        range_update(i, i, a); // gán giá trị ban đầu
    }

    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int u, v;
            ll x;
            cin >> u >> v >> x;
            range_update(u, v, x);
        } else {
            int u, v;
            cin >> u >> v;
            cout << range_sum(u, v) << '\n';
        }
    }
}

/*
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
*/
