#include<bits/stdc++.h>

using namespace std;


int main(){
	int test; cin >> test;
	while(test--){
		int d;
		cin >> d;
		string s;
		cin >> s;
		map<char,int> mp;
		int n= s.length();
		int M = INT_MIN;
		for(int i =0; i  < n; i++){
			mp[s[i]]++;
			M = max(M,mp[s[i]]);
		}
		if((M-1)*(d-1) > n-M) cout<<-1 << endl;
		else cout << 1 << endl;
	}
	return 0;
}