#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n];
		for(int i =0; i <n; i++){
			cin >> a[i];
		}
		int i = n-1;
		while(a[i] < a[i-1]){
			i--;
		}
		if(i>0){
			sort(a+i,a+n);
			for(int j = i; j <n; j++){
				if(a[j] > a[i-1]){
					swap(a[j],a[i-1]);
					break;
				}
			}
			for(int j=0; j < n; j++){
				cout << a[j] <<" ";
			}
			cout << endl;
		}
		else{
			for(int j = 1; j<=n; j++){
				cout << j<< " ";
			}
			cout << endl;
		}
	}
}