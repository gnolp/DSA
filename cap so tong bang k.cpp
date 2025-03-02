#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
			int n, k;
	    cin >> n >> k;
	    vector<int> a(n);
	    for (int i = 0; i < n; ++i) {
	        cin >> a[i];
	    }
	    sort(a.begin(), a.end());
	
	    long long ans = 0; // note
	    for (int i = 0; i < n; ++i) {
	        ans += upper_bound(a.begin() + i + 1, a.end(), k - a[i]) - lower_bound(a.begin() + i + 1, a.end(), k - a[i]);
	    }
	    cout << ans << endl;
	}
}