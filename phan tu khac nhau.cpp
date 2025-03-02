#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		int n; cin >>n;
		long long a[n],b[n];
		for(int i =0; i <n; i++) cin >> a[i];
		for(int i=0; i <n-1; i++) cin >> b[i];
		b[n-1]=a[n-1]+1;
		for(int i=0; i <n; i++){
			if(a[i]!=b[i]){
				cout << i+1 << endl;
				break;
			} 
		}
	}
}