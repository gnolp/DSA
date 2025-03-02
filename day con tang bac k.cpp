#include<bits/stdc++.h>

using namespace std;

int a[1000], b[1001];
int n,k;
int cnt = 0;

void init(){
	for(int i=0;i <n; i++){
		b[i] = 0;
		cin >> b[i];
	}
	for(int i= 0 ; i <k; i++){
		a[i] = i+1;
	}
}
void in(){
	for(int i=0;i<k;i++) cout << a[i];
	cout <<" ";
}
bool check(){
	for(int i =1; i <k; i++){
		if(b[a[i]-1]<b[a[i-1]-1]) return false;
	}
	return true;
}
void sinh(){
	int i = k-1;
	while(a[i] == n-k+i+1) {
		i--;
	}
	if(a[i] <= n-k+i && i >=0){
		a[i]++;
		for(int j =i+1; j<k; j++){
			a[j] = a[j-1]+1;
		}
//		in();
		if(check()){
//			in();
			cnt++;
		} 
		sinh();
	}
}
int main(){
		cin >> n >>k;
		init();
		if(check()) cnt++;
		sinh();
		
//		for(int i =0; i <n; i++) cout << b[i]<<" ";
		cout <<  cnt << endl;
	return 0;
}