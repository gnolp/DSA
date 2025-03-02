#include<bits/stdc++.h>

using namespace std;
int n;
void Try(int i, int a[]){
	if(i==n) return;
	int b[n-i+1];
	for(int j=0; j <n-i; j++){
		b[j] = a[j] + a[j+1];
	}
	Try(i+1,b);
	cout <<"[";
	for(int j= 0; j<n-i; j++){
		cout << b[j];
		if(j<n-i-1) cout <<" ";
	}
	cout <<"]" <<" ";
}
int main(){
	int test; cin >> test;
	while(test--){
		cin >> n;
		int a[n];
		for(int i =0; i <n; i++){
			cin >> a[i];
		}
		Try(1,a);
		cout <<"[";
		for(int j= 0; j<n; j++){
			cout << a[j];
			if(j<n-1) cout <<" ";
		}
		cout <<"]"<< endl;
	}
}