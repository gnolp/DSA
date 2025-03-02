#include<bits/stdc++.h>

using namespace std;
int n,s;
int a[1001];
int b[1001];
bool ok =false;
bool check(){
	int sum =0;
	for(int i = 1; i <=n; i++){
		if(!b[i]) sum += a[i-1];
	}
	if(sum == s) return true;
	return false;
}
void in(){
	int t = n;
	while(b[t]) t--;
	cout << "[";
	for(int i = 1;i <=t; i++){
		if(!b[i]) {
			cout << a[i-1];
			if(i<t) cout <<" ";	
		}
	}
	cout <<"]" <<" ";
}

void Try(int i){
	for(int j =0; j <=1; j++){
		b[i] =j;
		if(i==n){
			if(check()){
				in();
				ok = true;
			}
		}
		else Try(i+1);
	}
}
int main(){
	int test; cin >> test;
	while(test--){
		ok = false;
		cin >> n;
		cin >> s;
		for(int i =0; i <n; i++) cin >>a[i];
		sort(a,a+n);
		Try(1);
		if(!ok) cout <<-1;
		cout << endl;
	}
}