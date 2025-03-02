#include<bits/stdc++.h>

using namespace std;
int n;
int a[1001];
vector<int> v;
set<vector<int>> s;
bool cmp(int a, int b){
	return a > b;
}
// 5 4 3 2 
void Try(int i,int Sum,vector<int> v){

	
	if(Sum%2==1) s.insert(v);
	for(int j = i+1; j<=n; j++){
		v.push_back(a[j]);
		Try(j,Sum + a[j],v);
		v.pop_back();
	}
}
int main(){
	int test; cin >> test;
	while(test--){
		cin >> n;
		for(int i = 1; i <=n; i++){
			cin >> a[i];
		}
		sort(a+1,a+n+1,cmp);
//		for(int i = 1; i <=n; i++) cout << a[i] <<" ";
//		cout << endl;
		for(int i = 1; i <=n; i++){
			Try(i,a[i],{a[i]});
		}
		for(auto x:s){
			for(auto i : x){
				cout << i << " ";
			}
			cout << endl;
		}
		v.clear();
		s.clear();
	}
}