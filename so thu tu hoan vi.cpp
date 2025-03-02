#include<bits/stdc++.h>

using namespace std;
int a[1001];
int n;

void init(){
	for(int i =0 ;i<n;i++){
		cin >>a[i];
	}
}


//next_permutation(a,a+n) cau hinh tiep theo;
// perv_permutation(a,a+n) cau hinh truoc do;
int main(){
	int test; cin >> test;
	while(test--){
		cin >> n;
		int cnt = 0;
		init();
		do{
			cnt++;
		}while(prev_permutation(a,a+n));
		cout << cnt << endl;	
	}
	return 0;
}