#include<bits/stdc++.h>

using namespace std;
string s;
int n;
char a[1001];

void in(int i){
	for(int j =1;j<=i;j++){
		cout << a[j];
	}
	cout <<" ";
}
void Try(int i){
	for(int j=1;j<=n; j++){
		if(s[j-1]>a[i-1]){
			a[i] = s[j-1];
			in(i);
			if(i<n){
				Try(i+1);
			}
		}
	}
}
int main(){
	int test; cin >> test;
	while(test--){
		cin >> n;
		cin >> s;
		a[0] = '0';
		Try(1);
		cout << endl;
	}
}