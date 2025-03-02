#include<bits/stdc++.h>

using namespace std;
int n;

void Try(int i, int a[]){
	if(i==n) return;
	int b[n-i+1];
	cout <<"[";
	for(int j =0; j<n-i; j++){
		b[j] = a[j] + a[j+1];
		cout << b[j];
		if(j < n-i-1) cout <<" ";
	}
	cout <<"]" << endl;
	Try(i+1,b);
}
int main(){
	int test; cin >> test;
	while(test--){
		cin >> n;
		int a[n];
		for(int i =0; i <n; i++){
			cin >> a[i];
		}
		cout <<"[";
		for(int i =0; i <n; i++){
			cout << a[i];
			if(i<n-1) cout <<" ";
		}
		cout <<"]" << endl;
		Try(1,a);
	}
}