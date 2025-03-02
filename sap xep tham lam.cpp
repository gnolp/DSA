#include<bits/stdc++.h>

using namespace std;


bool check(vector<int> v, int l, int r,int n){
	while(l<r){
		if((v[l] < v[n/2] && v[r] < v[n/2]) || (v[l]>v[n/2] && v[r] > v[n/2]))
		return false;
		l++;
		r--;
	}
	return true;
}
int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >>n;
		vector<int> v;
		for(int i =0; i <n; i++){
			int x; cin >> x;
			v.push_back(x);
		}
		if(!n&1){
			int tmp = (v[n/2] + v[n/2-1]) / 2;
			v.insert(v.begin()+n/2-1,tmp);
		}
		if(check(v,0,n-1,n)) cout << "Yes" << endl;
		else cout <<"No" << endl;
	}
}