#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		set<int> s;
		for(int i =0; i <n; i++){
			int x; cin >> x;
			s.insert(x);
		}
		if(s.size()==1) cout << -1 << endl;
		else{
			auto x = s.begin();
			cout << *(s.begin()) <<" " ;
			x++;
			cout << *(x) << endl;
		}
	}
}