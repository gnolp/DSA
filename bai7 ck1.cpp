#include<bits/stdc++.h>

using namespace std;

bool check(int l,int r,string s){
	while(l<r){
		if(s[l-1]!= s[r-1]) return false;
		l++;
		r--;
	}
	return true;
}

int main(){
	string  s; cin >> s;
	int q; cin >> q;
	while(q--){
		int l,r;
		cin >> l >> r;
		if(check(l,r,s)){
			cout << "YES" << endl;
		} 
		else cout << "NO" << endl;
	}
}