#include<iostream>
#include<vector>

using namespace std;

int n;
vector<pair<int,int>> a;
int b[1001][1001];
int main(){
	cin >> n;
	for(int i =1; i <=n; i++){
		for(int j = 1; j <=n; j++){
			cin >> b[i][j];
		}
	}
	for(int i =1; i <=n; i++){
		for(int j =i; j<=n; j++){
			if(b[i][j])	a.push_back({i,j});
		}
	}
	for(auto x:a){
		cout << x.first <<" " << x.second << endl;
	}
	return 0;
}