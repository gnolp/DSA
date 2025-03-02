#include<bits/stdc++.h>

using namespace std;

set<vector<string>> se;
int n;
bool visited[1001];
vector<string> v;
vector<string> s;

void Try(int i){
	for(int j = i; j <n; j++){
		s.push_back(v[j]);
		se.insert(s);
		Try(j+1);
		s.pop_back();
	}
}

int main(){
	cin >> n;
	for(int i = 0; i <n; i++){
		cin.ignore();
		string t; cin >> t;
		v.push_back(t);
	}
	Try(0);
	for(auto x: se){
		for(auto i: x) cout << i ;
		cout << endl;
	}
		
		
}