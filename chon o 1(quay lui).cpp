#include<bits/stdc++.h>

using namespace std;

int n,k;
vector<string> v;
int a[1000];
int used[1000]={};
int d[1000][1000];
bool check(){
	int sum = 0;
	for(int i =1; i <=n; i++){
		sum += d[i][a[i]];
	}
	if(sum==k) return true;
	return false;
}
void push(){
	string tmp="";
	for(int i =1; i <=n;i++){
		tmp = tmp+ to_string(a[i]);
	}
	v.push_back(tmp);
}
int M = INT_MIN;
void Try(int i){
	for(int j = 1; j <=n; ++j){
		if(!used[j]){
			a[i] = j;
			used[j] = 1;
			if(i==n) {
				if(check()){
					push();
				}
			}
			else Try(i+1);
			used[j] = 0;
		}
	}
}

int main(){
		cin >> n >>k;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <=n; j++){
				cin >> d[i][j];
			}
		}
		Try(1);
		cout << v.size() << endl;
		for(auto x:v){
			for(int i=0;i<x.length(); i++) cout << x[i] <<" ";
			cout << endl;
		}
		return 0;
}