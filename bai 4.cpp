#include<bits/stdc++.h>

using namespace std;

int a[1001];
set<int> se;
int n,k;

void in(){
	for(int i = 1; i <=k; i++) cout << a[i] <<" ";
	cout << endl;
}
void Try(int i){
	for(int j = a[i-1]; j <= n; j++){
		a[i] = j;
		if(i==k){
			in();
		}
		else Try(i+1);
	}
}

int main(){
	int test = 1;
	while(test--){
		cin >> n;
		cin >> k;
		a[0] = 1;
		Try(1);
	}
}