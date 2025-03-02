#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int cnt =1;
	int a[1001];
	for(int i = 0;i<n; i++){
		a[i] = i+1;
	}
	do{
		if(cnt%m==0){
			for(int i = 0; i <n; i++) cout << a[i] <<" ";
			cout << endl;
		}
		cnt++;
	}
	while(next_permutation(a,a+n));
}