#include<bits/stdc++.h>

using namespace std;

int n,m;
int a[1001],c[1001];
int v[1001], XOPT[1001];
void init(){
	for(int i =0; i <n; i++){
		v[i] = 0;
	}
}

int Max = -1;
void check(){
	int FOPT = 0;
	int C = 0;
	for(int i = 0; i <n; i++){
		FOPT += a[i]*v[i];
		C += c[i]*v[i];
	}
	if(C> Max && FOPT <=m){
		Max = C;
		for(int i =0; i <n; i++){
			XOPT[i] = v[i];
		}
	}
}


void sinh(){
	int i = n-1;
	while(v[i]==1){
		i--;
	}
	v[i] = 1;
	if(i>=0){
		for(int j= i+1; j<n; j++) v[j] = 0;
		check();
		sinh();
	}
}
int main(){
	cin >> n >> m;
	for(int i = 0; i <n; i++) cin >> c[i];
	for(int j =0; j <n; j++) cin >> a[j];
	init();
	sinh();
	cout << Max << endl;
	for(int i =0; i <n; i++) cout << XOPT[i] <<" ";
}