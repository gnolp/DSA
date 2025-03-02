#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		long long n,s;
		cin >> n >> s;
		int a[n];
		int su = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			su += a[i];
		}
		int d[su+5];
		memset(d,0,sizeof(d));
		if(su < s){
			cout <<"NO" << endl;
		}
		else{
			d[0] = 1;
			for(int i = 0; i < n; i++){
				for(int j = su; j>=a[i]; j--){
					if(d[j]==0 && d[j-a[i]]==1){
						d[j] = 1;
					}
				}
			}
			if(d[s]){
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}
}