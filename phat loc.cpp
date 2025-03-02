#include<bits/stdc++.h>

using namespace std;
int a[1001];
int n;
void init(){
	for(int i =0; i <n; i++){
		a[i] = 0;
	}
}
void in(){
	cout <<8;
	for(int i =0 ; i <n; i++){
		if(a[i]==0) cout <<6;
		else cout <<8;
	}
	cout << 6;
	cout << endl;
}
bool check8(){
	if(a[0]==1) return false;
	for(int i = 0; i <n; i++){
		if(a[i]==1&&a[i+1]==1) return false;
	}
	return true;
}
bool check6(){
	int i = 0;
	while(i<n){
		int cnt= 0;
		for(int i =0; i <4; i++){
			if(a[i]==0) cnt++;
		}
		i++;
		if(cnt>=4) return false;
	}
	if(a[n-1]==0 && a[n-2]==0&& a[n-3]==0) return false;
	return true;
}
void sinh(){
	int i = n-1;
	while(a[i]==1) i--;
	a[i] = 1;
	for(int j = i+1; j <n; j++){
		a[j] = 0;
	}
	if(i>=0){
		if(check8()&&check6()) in();
		sinh();
	}
}

int main(){
		cin >> n;
		n-=2;
		if(check8()&&check6()) in();
		else sinh();
}