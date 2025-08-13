#include<bits/stdc++.h>

using namespace std;

int n, q;
vector<int> bit,a;

void updatePoint(int idx, int v){
	while(idx <= n){
		bit[idx] += v;
		idx += (idx & (-idx));
	}
}

int getSum(int idx){
	int ans = 0;
	while(idx > 0){
		ans += bit[idx];
		idx -= (idx &(-idx));
	}
	return ans;
}

int main(){
	cin >> n >> q;
	a.resize(n+1);
	bit.resize(n+1,0);
	for(int i =1; i<= n; i++){
		cin >> a[i];
		updatePoint(i, a[i]);
	}
//	for(int x:bit){
//		cout << x << " ";
//	}
//	cout << endl;
	while(q--){
		int casse;
		cin >> casse;
		int idx, v;
		if(casse == 1){	
			cin >> idx >> v;
			updatePoint(idx,v);
		} else{
			cin >> idx >>v;
			cout <<  getSum(v) - getSum(idx-1);
			cout <<"\n";
		}
	}
}