#include<bits/stdc++.h>

using namespace std;
int n,s,a[1001];
vector<vector<int>> v;

void Try(int i,int sum,vector<int> x){
	if(sum>=s||i>n){
		if(sum==s) v.push_back(x);
		return;
	}
	else{
		x.push_back(a[i]);
		Try(i,sum+a[i],x);
		x.pop_back();
		Try(i+1,sum,x);	
	}
}
int main(){
	int test; cin >> test;
	while(test--){
		v.clear();
		cin >> n >> s;
		for(int i =1; i <=n; i++){
			cin >> a[i];
		}
		Try(1,0,{});
		if(v.size()!=0){
			cout << v.size() <<" ";
			for(auto x:v){
				cout <<"{";
				for(int i = 0;i< x.size()-1; i++) {
					cout << x[i]<<" ";
				}
				cout << *(x.end()-1) <<"}" <<" ";
			}
			cout << endl;
		}
		else cout << -1 <<endl;
	}
}