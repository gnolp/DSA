#include<bits/stdc++.h>
using namespace std;

int n,k,a[1001];
int b[1001];

void in(){
	for(int i =1; i<=k;i++){
		cout  << a[b[i]] <<" ";
	}
	cout << endl;
}
void Try(int i){
	for(int j = b[i-1]+1; j <= n-k+i; j++){
		b[i] = j;
		if(i==k) in();
		else Try(i+1);
	}
}
int main(){
	int test; cin >> test;
	while(test--){
		cin >> n >> k;
		for(int i = 1; i <=n; i++){
			cin >> a[i];	
		}
		b[0]  = 0;
		sort(a+1,a+n+1);
		Try(1);
	}
}