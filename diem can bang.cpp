#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int test; cin >> test;
	while(test--){
		int n; cin >>n;
		int a[n],b[n];
		int sum = 0;
		for(int i = 0; i <n; i++){
			cin >> a[i];
			b[i] = a[i];
			sum += a[i];
		}
		int pos = -2;
		for(int i = 1; i<n; i++){
			a[i] += a[i-1];
		}
//		for(int x:a) cout << x <<" ";
//		cout << endl;
//		for(int x:b) cout << x <<" ";
//		cout << endl;
		for(int i = 0; i <n; i++){
			if(a[i]-b[i]==sum-a[i]){
				pos=i;
				break;
			}
		}
		cout << pos+1 << endl;
	}
	return 0;
}