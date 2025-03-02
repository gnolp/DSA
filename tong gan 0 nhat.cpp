#include<bits/stdc++.h>

using namespace std;
bool cmp(int a, int b){
	return abs(0-a) < abs(0-b);
}
int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n];
		int t = INT_MAX;
		for(int &x:a) cin >> x;
		for(int i =0; i <n; i++){
			for(int j = i+1; j<n; j++){
//				t = min(t,abs(0-a[i]-a[j]));
				if(abs(0-a[i]-a[j]) < abs(t)){
					t = a[i] + a[j];
				}
			}
		}
		cout << t << endl;
	}
}