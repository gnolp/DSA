#include<iostream>
#include<vector>

using namespace std;

//don do thi vo huong

int n,m;
vector<int> a[1001];

int main(){
	cin >> n >>m;
	for(int i = 0; i <m; i++){
		int x,y; cin >> x >>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	for(int i = 1; i <=n; i++){
		cout << i<<":";
		for(auto j: a[i]){
			cout << j <<" ";
		}
		cout << endl;
	}
	return 0;
}