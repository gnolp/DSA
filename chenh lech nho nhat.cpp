#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		vector<int> v;
		for(int i = 0; i<n; i++){
			int x; cin >> x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		int ans = INT_MAX;
		for(int i = 0;i<n-1; i++){
			ans = min(abs(v[i]-v[i+1]),ans);
			if(ans==0) break;
		}
		cout << ans << endl;
	}
}