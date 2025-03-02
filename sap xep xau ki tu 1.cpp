#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		cin.ignore();
		string s; cin >> s;
		map<char,int> mp;
		int n = s.length();
		int Max = INT_MIN;
		for(int i =0; i <n; i++){
			mp[s[i]]++;
		}
		for(auto x:mp){
			Max = max(Max,x.second);
		}
//		cout << Max << endl;
		if(Max*2>n+1) cout << -1 << endl;
		else cout << 1 << endl;
	}
	return 0;
}