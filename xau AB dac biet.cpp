#include<bits/stdc++.h>

using namespace std;

int a[1001];
int n,k;
int cnt=0;
vector<string> v;
void init(){
	for(int i =0; i <n; i++){
		a[i] = 0;
	}
}
void in(){
	for(int i =0 ; i <n; i++){
		cout << a[i];
	}
	cout <<" ";
}
bool check(){
	cnt = 0;
	int i=0;
	while(i<n-k+1){
		for(int j=0;j<k; j++){
			if(a[i+j]) break;
			else if(a[i+j]==0&&j==k-1) cnt++;
		}
		i++;
	}
	if(cnt==1) return true;
	return false;
}
void push(){
	string temp="";
	for(int i =0;i<n; i++){
		if(!a[i]) temp +="A";
		else temp +="B";
	}
	v.push_back(temp);
}
void sinh(){
	int i = n-1;
	while(a[i]==1) i--;
	a[i] = 1;
	for(int j = i+1; j <n; j++){
		a[j] = 0;
	}
	if(i>=0){
		if(check()){
			push();
		}
		sinh();
	}
}
int main(){
	cin >> n >> k;
	sinh();
	cout << v.size() << endl;
	for(auto x:v) cout << x << endl;
	return 0;
}