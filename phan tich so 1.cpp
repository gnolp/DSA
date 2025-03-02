#include<bits/stdc++.h>

using namespace std;

int n; int a[100];
int cnt,ok;
void kt(){
	ok = 1;
	a[1] =n;
	cnt = 1;
}
void in(){
	cout <<"(";
	for(int i =1; i <=cnt ; i++){
		cout << a[i];
		if(i<cnt) cout <<" ";	
	}
	cout <<") ";
}
void sinh(){
	int i = cnt;
	while(a[i]==1&&i>=1){
		i--;
	}
	if(i==0) ok = 0;
	else{
		a[i]--;
		int them = cnt-i+1;
		int nguyen = them/a[i];
		int du = them%a[i];
		cnt = i;
		for(int j = 1; j <= nguyen ; j++){
			a[cnt+1] = a[i];
			cnt++;
		}
		if(du) {
			a[cnt+1] = du;
			cnt++;
		}
		in();
	}
}
int main(){
	int test; cin >> test;
	while(test--){
		cin >> n;
		kt();
		in();
		while(ok){
			sinh();
		}
		cout << endl;
	}
}