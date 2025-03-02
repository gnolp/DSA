#include<bits/stdc++.h>

using namespace std;
int a[1001];
int n;

void init(){
	for(int i =0 ;i<n;i++){
		a[i]=n-i;
	}
}
void in(){
	for(int i=0;i<n;i++){
		cout << a[i];
	}
	cout<<" ";
}

//next_permutation(a,a+n) cau hinh tiep theo;
// perv_permutation(a,a+n) cau hinh truoc do;
int main(){
	int test; cin >> test;
	while(test--){
		cin >> n;
		init();
		do{
			in();
		}while(prev_permutation(a,a+n));
		cout << endl;	
	}
	return 0;
}