#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		string s; cin >> s;
		long long ans = 0;
		for(int i = 0;i < s.length(); i++){
			string tmp = "";
			for(int j = i; j< s.length(); j++){
				tmp += s[j];
//				cout << tmp <<" ";
				ans += stoll(tmp);
			}
		}
		cout << endl;
		cout << ans << endl;
	}
}