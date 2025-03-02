#include<bits/stdc++.h>

using namespace std;
string s;
int n;
int a[101];
char b[101];
void in(){
	for(int i =1; i <=n; i++){
		cout << b[i];
	}
	cout <<" ";
}
void resert(){
	for(int i =0; i <n; i++){
		a[i] = 0;
	}
}
void Try(int i){
	for(int j =0; j <n; j++){
		if(!a[j]){
			b[i] = s[j];
			a[j] = 1;
			if(i==n) in();
			else Try(i+1);
			a[j] = 0;
		}
	}
}
int main(){
	int test; cin >> test;
	while(test--){
		cin >> s;
		cin.ignore();
		n = s.length();
		resert();
		sort(s.begin(),s.begin()+n);
		Try(1);
		cout << endl;
	}
}