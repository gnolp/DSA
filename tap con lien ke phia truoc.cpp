#include<bits/stdc++.h>

using namespace std;
int a[1001];
int n,k;

void sinh(){
	int i = k-1;
	while(a[i]-a[i-1]==1) i--;
		a[i]--;
		for(int j = i+1; j<k; j++){
			a[j] = n-k+j+1;
		}
	for(int j=0; j <k; j++) cout << a[j] <<" ";
}
int main(){
	int test; cin >> test;
	while(test--){
		cin >> n >>k;
		for(int i =0;i<k; i++) cin >> a[i];
		bool ok = true;
		for(int i =0; i  <k; i++){
			if(a[i]!= i+1) ok = false;
		}
		if(!ok)
		sinh();
		else for(int i =0; i <k; i++) cout << n-k+i+1 <<" ";
		cout << endl;
	}
}