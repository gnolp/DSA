#include<bits/stdc++.h>

using namespace std;
int a[1000];
int b[1001];
int n,k;
void init(){
	for(int i= 0 ; i <k; i++){
		a[i] = i+1;
		cin >> b[i];
	}
}
bool check(){
	for(int i= 0 ; i <k; i++){
		if(a[i]!=b[i]) return true;
	}
	return false;
}
int cnt = 1;
void sinh(){
	int i = k-1;
	while(a[i] == n-k+i+1) {
		i--;
	}
	if(a[i] <= n-k+i && i >=0 && check()){
		a[i]++;
		for(int j =i+1; j<k; j++){
			a[j] = a[j-1]+1;
		}
		cnt++;
		sinh();
	}
}
int main(){
	int test; cin >> test;
	while(test--){
		cin >> n >>k;
		init();
		sinh();
		cout << cnt <<endl;
		cnt = 1;
	}
	return 0;
}