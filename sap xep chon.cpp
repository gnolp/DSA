#include<bits/stdc++.h>

using namespace std;


void in(int a[],int n){
	for(int i =0; i <n; i++){
		cout << a[i] <<" ";
	}
	cout << endl;
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i =0; i <n; i++){
		cin >> a[i];
	}
	for(int i = 0; i <n-1; i++){
		int pos = i;
		for(int j = i+1; j <n; j++){
			if(a[pos] > a[j]){
				pos = j;
			}
		}
		swap(a[i],a[pos]);
		cout <<"Buoc "<< i+1 <<": ";
		in(a,n);
	}
}