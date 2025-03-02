#include<bits/stdc++.h>

using namespace std;
int n, a[1001][1001];
int visit[1001][1001];
vector<char> v;
bool ok;
void in(){
	for(auto x:v){
		cout << x;
	}
	cout <<" ";
}
void print(){
	for(int i =0; i <n; i++){
		for(int j =0; j <n; j++){
			cout << visit[i][j] <<" ";
		}
		cout << endl;
	}
	cout << endl;
}
void Try(int i, int j){
	if(i==n-1 && j== n-1){
		ok = 1;
		in();
	}
	if(i+1<n && visit[i+1][j]){
		visit[i][j] = 0;
		v.push_back('D');
		Try(i+1,j);
		visit[i][j] =1;
		v.pop_back();
	}
	if(j-1>=0&& visit[i][j-1]){
		visit[i][j] =0;
		v.push_back('L');
		Try(i,j-1);
		visit[i][j] =1;
		v.pop_back();
	}
	if(j+1<n && visit[i][j+1]){
		visit[i][j] =0;
		v.push_back('R');
		Try(i,j+1);
		visit[i][j] =1;
		v.pop_back();	
	}
	if(i-1>=0 && visit[i-1][j]){
		visit[i][j] =0;
		v.push_back('U');
		Try(i-1,j);
		visit[i][j] =1;
		v.pop_back();
	}
}
int main(){
	int test;
	cin >> test;
	while(test--){
		cin >> n;
		ok = 0;
		for(int i =0;i<n; i++){
			for(int j =0; j <n; j++){
				cin >> a[i][j];
				visit[i][j] = a[i][j];
			}
		}
		if(a[0][0] == 0) cout << -1 << endl;
		else{
			Try(0,0);
			if(!ok) cout << -1;
			cout << endl;
		}
	}
}