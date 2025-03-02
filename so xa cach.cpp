#include<bits/stdc++.h>

using namespace std;

int n;
int a[1001];
bool used[1001];
bool check(){
	for(int i =1;i<n; i++){
		if(abs(a[i]-a[i+1])==1) return false;
	}
	return true;
}
void in(){
	for(int i=1;i<=n; i++){
		cout << a[i];
	}
	cout <<endl;
}
void Try(int i){
	for(int j =1; j<=n; j++){
		if(!used[j]){
			a[i] = j;
			used[j]=1;
			if(i==n){
				if(check()) in();
			}
			else Try(i+1);
			used[j] = 0;
		}
	}
}
int main(){
	int test; cin >> test;
	while(test--){
		cin >>n;
		Try(1);
		cout <<" " << endl;
	}
}