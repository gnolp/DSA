#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;  cin >> test;
	while(test--){
		int dinh,canh;
		cin >> dinh >>  canh;
		vector<vector<int>> a(dinh+1);
		
		int dd,dc;
		while(canh--){
			cin >> dd >> dc;
			a[dd].push_back(dc);
			a[dc].push_back(dd);
		}
		for(int i = 1; i <= dinh; i++){
			cout << i <<": ";
			for(auto x:a[i]) cout << x  <<" ";
			cout << endl;
		}
	}
	return 0;
}