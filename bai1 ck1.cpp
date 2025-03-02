#include<bits/stdc++.h>

using namespace std;
int n,m;
int a[1005];

void in(){
	for(int i = 0; i<n; i++) cout << a[i] << " ";
	cout << endl;
}

void check(){
	if(a[0]==m) in();
	// a[n-1]== m in() // ck2;
}
int main(){
	
	cin >> n >> m;
	
	for(int i = 0 ;i <n; i++) a[i] = i+1;
	do{
		check();
	}
	while(next_permutation(a,a+n));
	return 0;
}