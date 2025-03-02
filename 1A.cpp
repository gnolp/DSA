#include<bits/stdc++.h>

using namespace std;

int main(){
	string s; cin >> s;
	int n = s.length();
	int q; cin >> q;
	while (q--){
		int a; cin >> a;
		reverse(s.begin()+a,s.end()-n+a);
	}
	cout << s << endl;
}