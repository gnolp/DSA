#include<bits/stdc++.h>

using namespace std;

vector<int> bit1, bit2;
int a[2*100000];
int n;
int update(vector<int>& b,int idx, int v){
	while(idx <= n){
		b[idx] += v;
		idx += (idx &(-idx));
	}
}
int getSum(vector<int> &b, int p){
	int ans = 0;
	while(p>0){
		ans += b[p];
		p -= (p & (-p));
	}
	return ans;
}

int main(){
	cin >> n;
	bit1.resize(n+1);
	for(int i = 1; i<=n; i++){
		cin >> a[i];
		update(bit1, i, a[i]);
	}
	cout << getSum(bit1,3) - getSum(bit1,1);
}