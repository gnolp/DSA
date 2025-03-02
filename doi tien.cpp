#include<bits/stdc++.h>

using namespace std;
int a[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >>n;
		int cnt =0;
		int i = 9;
		while(n){
			int tmp = n/a[i];
			cnt+=tmp;
			n = n- tmp*a[i];
			i--;
		}
		cout<< cnt << endl;
	}
}