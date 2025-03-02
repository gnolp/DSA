#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int n = s.length();
	int d[n];
	for(int i = 0; i<n; i++) d[i] = 1;
	int res = 1;
	for(int i =1; i<n; i++){
		if(s[i]>=s[i-1]){
			d[i] = d[i-1]+1;
			res = max(res,d[i]);
		}
	}
	cout << res << endl;
}