#include<bits/stdc++.h>

using namespace std;

int n,x, a[1001];
vector<vector<int>> keys;

void Try(int pos,int s, vector<int> v){
	if(s>= x){
		if(s== x) keys.push_back(v);
		return;
	}
	for(int i = pos; i <n; i++){
		v.push_back(a[i]);
		Try(i,s+a[i],v);
		v.pop_back();
//		Try(i+1,s,v);
	}
}

int main(){
	int test;
	cin >> test;
	while(test--){
		keys.clear();
		cin >> n >> x;
		for(int i =0; i <n; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		Try(0,0,{});
		if(!keys.size()) cout << -1 << endl;
		else{
			for(auto x:keys){
				cout <<"[";
				for(int i=0;i<x.size();i++){
					if(i!= x.size()-1){
						cout << x[i] <<" ";
					}
					else{
						cout << x[i];
					}
				}
				cout <<"]";
			}
			cout << endl;	
		}
	}
	return 0;
}