#include<bits/stdc++.h>

using namespace std;

int m(int a[],int l, int r){
	int tmp = INT_MIN;
	for(int i = l; i <r; i++){
		tmp = max(tmp,a[i]);
	}
	return tmp;
}

int main(){
	int test; cin >> test;
	while(test--){
		int n,k; cin >> n >>k;
		int a[n];
		vector<int> v;
		int d = INT_MIN;
		int i = 0;
		for(i; i <n; i++){
			cin >> a[i];
		}
		for(int i = 0;i<=n-k; i++){
			v.push_back(m(a,i,i+k));
		}
		for(auto x:v) cout << x <<" ";
		cout << endl;
	}
}