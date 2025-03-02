#include<bits/stdc++.h>

using namespace std;
int a[1001][1001];
bool cot[1001];
bool cc[1001];
bool cp[1001];
int cnt =0;
int n;
void init(){
	for(int i =0;i<100; i++){
		cot[i] =cc[i]=cp[i] = false;
	}
}
void Try(int i){
	for(int j =1; j <=n; j++){
		if(!cot[j]&&!cc[i-j+n]&&!cp[i+j-1]){
			cot[j]= cc[i-j+n] = cp[i+j-1] = true;
			if(i==n) cnt++;
			else Try(i+1);
			cot[j]= cc[i-j+n] = cp[i+j-1] = false;
		}
	}
}
int main(){
	int test; cin >> test;
	while(test--){
		cin >> n;
		init();
		Try(1);
		cout << cnt << endl;
		cnt =0;
	}
}