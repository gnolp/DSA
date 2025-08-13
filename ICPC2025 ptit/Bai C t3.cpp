#include<bits/stdc++.h>

using namespace std;

int main(){
	string s; cin >> s;
	int k; cin >> k;
	sort(s.begin(),s.end());
	int cnt = 1;
	do{
		if(cnt == k){
			cout << s;
			return 0;
		}
		cnt++;
	} while(next_permutation(s.begin(),s.end()));
}