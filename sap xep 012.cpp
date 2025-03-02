#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int dem0=0,dem1=0,dem2=0;
		int x;
		for(int  i =0; i <n; i++){
			cin >> x;
			if(x==0) dem0++;
			else if(x==1)dem1++;
			else dem2++;
		}
		while(dem0--) cout << 0 << " ";
		while(dem1--) cout << 1 << " ";
		while(dem2--) cout << 2 << " ";
		cout << endl;
	}
}