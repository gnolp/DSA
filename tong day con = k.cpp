#include<bits/stdc++.h>

using namespace std;

int a[1001];
int b[1001];
int n,k;
void init(){
 	for(int i =0; i <n; i++){
 		cin >> a[i];
 		b[i] = 0;
	}
	sort(a,a+n);
}
int cnt =0;
bool check(){
	int sum = 0;
	for(int i =0; i <n; i++){
		if(b[i]){
			sum+= a[i];
		}
	}
	if(sum==k) return true;
	return false;
}

void in(){
	for(int i =0; i <n; ++i) if(b[i]) cout << a[i] <<" ";
	cout << endl;
}
void sinh(){
	int i = n-1;
	while(b[i]==1){
		i--;
	}
	b[i] = 1;
	for(int j= i+1; j<n; j++){
		b[j] = 0;
	}
	if(i>=0){
		if(check()){
			in();
			cnt ++;
		}
		sinh();
	}
}

int main(){
	cin >> n >> k;
	init();
	sinh();
	cout << cnt;
}