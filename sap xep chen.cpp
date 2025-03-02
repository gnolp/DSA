#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n; 
	int a[n];
	for(int i = 0; i <n; i++){
		cin >> a[i];
	}
	multiset<int> s;
	for(int i =0; i <n; i++){
		s.insert(a[i]);
		cout <<"Buoc " << i <<": ";
		for(auto x:s){
			cout << x <<" ";
		}
		cout << endl;
	}
}