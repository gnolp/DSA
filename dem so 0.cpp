#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n];
		int cnt =n+1;
		for(int i=0;i<n; i++){
			cin >> a[i];
			if(a[i]==1) cnt = min(cnt,i);
			else if(a[i]==0 && i==n-1) cnt = n;
		}
		if(cnt) cout << cnt<< endl;
		else cout << 0 << endl;
	}
}