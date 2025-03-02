#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		set<int> s;
		int ans;
		int tmp;
		bool ok = 0;
		for(int i = 0;i<n; i++){
			cin >> tmp;
			int cnt = s.size();
			if(!ok) s.insert(tmp);
			if(s.size()== cnt&&!ok){
				ok = 1;
				ans = tmp;
			}
		}
		if(ok) cout << ans << endl;
		else cout <<"NO" << endl;
	}
}