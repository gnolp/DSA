#include<bits/stdc++.h>

using namespace std;

bool check(int a, int b){
	int du = abs(a-b);
	double tmp = 1;
	int m = a;
	while(m--){
		tmp = tmp * (double)a / (double)b;
	}
	if(a>b){
		while(a>b){
			tmp /= b;
			a--;
		}
	}
	else{
		while(b>a){
			tmp *= a;
			b--;
		}
	}
	if(tmp > 1) return true;
	return false;
}

int main(){
	int test; cin >> test;
	while(test--){
		int n,m;
		cin >> n >>m;
		int a[n],b[m];
		if(check(n,m)) cout << 1 << endl;
		else cout <<0 << endl;
		for(int i =0; i <n; i++){
			cin >> a[i];
		}
		for(int i = 0; i <m; i++){
			cin >> b[i];
		}
		int cnt = 0;
		for(int i =0; i <n; i++){
			for(int j= 0; j <m; j++){
				if(check(a[i],b[j])){
//					cout << a[i] <<" " << b[j] << endl;
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}