#include<bits/stdc++.h>

using namespace std;
int a[1001];
int n;
bool check(){
	int l =0, r=n-1;
	while(l<r){
		if(a[l]!= a[r]) return false;
		r--;l++;
	}
	return true;
}
void init(){
	for(int i =0; i<n; i++){
		a[i] = 0;
	}
}
void in(){
	for(int i =0; i<n; i++){
		cout << a[i]<<" ";
	}
	cout << endl;
}
void sinh(){
	int i = n-1;
	while(a[i]==1){
		i--;
	}
	a[i]=1;
	for(int j = i+1; j<n;j++) a[j] = 0;
	if(i>=0){
		if(check()) in();
		sinh();
	}
}

int main(){
	cin >>n;
	in();
	sinh();
}