#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int Max = INT_MIN;
		int Min = INT_MAX;
		set<int> s;
		for(int i =0; i <n; i++){
			int x; cin >> x;
			Max = max(x,Max);
			Min = min(x,Min);
			s.insert(x);
		}
		cout << Max-Min+1 - s.size() << endl;
	}
}