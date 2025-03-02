#include<bits/stdc++.h>

using namespace std;

int n;
int a[20005];
int t[4*20005];

void build(int i,int l,int r){
	if(l==r){
		t[i] = a[l];
	}
	else{
		int m = (l+r)/2;
		build(2*i,l,m);
		build(2*i+1,m+1,r);
		t[i] = t[2*i] + t[2*i+1];
	}
}
void inorder(int i){
	if(t[2*i]!=0) inorder(2*i);
	cout << t[i] <<" ";
	if(t[2*i+1]!=0) inorder(2*i+1);
}
void preorder(int i){
	cout << t[i] <<" ";
	if(t[2*i])
	preorder(2*i);
	if(t[2*i+1])
	preorder(2*i+1);
}

void posorder(int i){
	if(t[2*i])
	posorder(2*i);
	if(t[2*i+1])
	posorder(2*i+1);
	cout << t[i] << " ";
}
int main(){
	cin >> n;
	for(int i = 0; i<n; i++){
		cin >> a[i];
	}
	build(1,0,n-1);
	for(int i = 0; i<= 24; i++){
		cout << t[i] <<" ";
	}
	cout << endl;
	cout << "pre: ";
	preorder(1);
	cout << endl;
	cout << "in: ";
	inorder(1);
	cout << endl;
	cout <<"pos: ";
	posorder(1);
}