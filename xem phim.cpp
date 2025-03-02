#include<bits/stdc++.h>

using namespace std;

int main(){
	int c,n;
	cin >> c >> n;
	int a[n+5];
	a[0] = 0;
	int su =0;
	for(int i = 1; i <=n; i++){
		cin >> a[i];
		su += a[i];
	}
	if(c >= su){
		cout << su << endl;
	}
	else{
		int d[su+5]={};
		d[0] = 1;
		for(int i = 1; i<=n; i++){
			for(int j = su; j>= a[i]; j--){
				if(d[j]==0 && d[j-a[i]]==1){
					d[j] = 1;
				}
			}
		}
		for(int i = c; i>=0; i--){
			if(d[i]){
				cout << i;
				break;
			}
		}
	}
}