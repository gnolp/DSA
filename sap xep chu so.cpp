#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		vector<string> v;
		for(int i = 0; i <n; i++){
			string s; cin >> s;
			v.push_back(s);
		}
		set<char> s;
		for(auto x:v){
			for(int i =0;i<x.length(); i++){
				s.insert(x[i]);
				if(s.size()==10) break;
			}
		}
		for(auto x:s) cout << x <<" ";
		cout << endl;
	}
}