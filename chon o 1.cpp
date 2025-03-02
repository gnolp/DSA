#include<bits/stdc++.h>

using namespace std;

struct data{
	int x;
	string s=""; //luu cac cot da duoc chon
};

void nhap(data &n,string l){
	cin >> n.x;
	n.s = l;
}
bool ok(string x, int j){ // kiem tra xem cot thu j da duoc chon hay chua 
	int tmp =0;
	for(int i = 0; i < x.length(); i++){
		if(x[i]!=';'){
			tmp = tmp*10 + x[i] -'0';
		}
		else{
			if(tmp==j) return false;
			tmp = 0;
		}
	}
	return true;
}
int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >>n;
		data a[n+1][n+1];
		int d[n+1][n+1];
		for(int i = 1; i <=n; ++i){
			for(int j = 1; j<=n; ++j){
				string tmp = to_string(j)+";";
				nhap(a[i][j],tmp);
				d[i][j] = a[i][j].x;
			}
		}
		for(int i = 1; i <n; i++){
			d[i][0] = 0;
			d[0][i] = 0;
		}
		int M = INT_MIN;
		for(int i = 2; i <=n; i++){
			for(int j = 1; j <=n; j++){
				string temp;
				for(int k = 1; k <= n; k++){
					if(ok(a[i-1][k].s,j)){
						if(d[i-1][k]+a[i][j].x> d[i][j]){
							d[i][j] = d[i-1][k]+a[i][j].x;
							M = max(d[i][j],M);
							temp = to_string(k) +";";
						}
					}
				}
				a[i][j].s += temp;
			}
		}
/*		for(int i = 1; i <=n; i++){
			for(int j = 1; j <=n; j++){
				cout << d[i][j] <<" ";
			}
			cout << endl;
		}*/
		cout << M << endl;
		M = INT_MIN;
	}
}