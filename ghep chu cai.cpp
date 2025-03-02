#include<bits/stdc++.h>

using namespace std;
int n;
int a[1001];
bool used[1001];
char b[8] = {'A','B','C','D','E','F','G','H'};
bool check(){
	int i =2;
	while(i<n){
		if(a[i]==1|| a[i]==5){
			if((a[i-1]!=1 &&a[i-1]!=5)&&(a[i+1]!=1&&a[i+1]!=5)) return false;
		}
		i++;
	}
	return true;
}
void in(){
	for(int i =1; i<=n; i++){
		cout << b[a[i]-1];
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
	char c; cin >> c;
	n = c-'A'+1;
	Try(1);
}