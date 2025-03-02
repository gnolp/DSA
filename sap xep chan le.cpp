#include<bits/stdc++.h>

using namespace std;

bool cmp(int a, int b){
	return a > b;
}

int main(){
	int n; cin >> n;
	int a[n+1];
	vector<int> le,chan;
	for(int i =1; i <=n; i++){
		cin >> a[i];
		if(i&1){
			le.push_back(a[i]);
		}
		else chan.push_back(a[i]);
	}
	sort(le.begin(),le.end());
	sort(chan.begin(),chan.end(),cmp);
	for(int i =0; i<n/2; i++){
		cout << le[i] <<" " << chan[i] <<" ";
	}
	if(le.size() > n/2) cout << le[n/2];
}