#include<bits/stdc++.h>

using namespace std;

int a[100001];

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int ans = n;
		for(int i=1;i<n+1; i++) cin >> a[i];
		sort(a+1,a+n+1);
		int l = n;
		int r = n/2;
		while(l>n/2 && r > 0){
			if(a[l] >= 2*a[r]){
				ans--;
				l--;
				r--;
			}
			else {
				r--;
			}
		}
		cout << ans << endl;
	}
}