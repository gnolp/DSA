#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n,m,k;
		cin >> n >>m >>k;
		multiset<int> s;
		for(int i =0; i <n+m;i++){
			int x; cin >> x;
			s.insert(x);
		}
		int x =0;
		for(auto it:s){
			x++;
			if(x==k){
				cout << it << endl;
				break;
			} 
		}
	}
}