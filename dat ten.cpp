#include<bits/stdc++.h>

using namespace std;
int n,m;
int a[1001];
vector<string> v;
void in(){
	for(int i=1; i<=m; i++){
		cout << v[a[i]-1] <<" ";
	}
	cout <<endl;
}
void Try(int i){
	for(int j = a[i-1]+1;j<=n-m+i;j++){
		a[i] = j;
		if(i==m) in();
		else Try(i+1);
	}
}

int main(){
	a[0] = 0;
	cin >> n >> m;
	set<string> s;
	
	for(int i =0; i <n; i++){
		string x;
		cin >> x;
		s.insert(x);
	}
	for(auto x:s){
		v.push_back(x);
	}
	n = v.size();
	Try(1);
}