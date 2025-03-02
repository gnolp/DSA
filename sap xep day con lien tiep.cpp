#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n],b[n];
		for(int i=0; i<n;i++){
			cin>> a[i];
			b[i] = a[i];
		}
		sort(a,a+n);
		int index =0, res = 1e9;
		for(int i =0; i <n;i++){
			if(a[i]!=b[i]){
				index = i+1;
				if(res > index){
					res = index;
				}
			}
		}
		cout <<  res << " " << index << endl;
	}
}