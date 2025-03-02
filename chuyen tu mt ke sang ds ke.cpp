#include<iostream>
#include<vector>

using namespace std;

int n;
vector<int> a[1001];
int b[1001][1001];

int main(){
	cin >> n;
	for(int i =1; i <=n; i++){
		for(int j = 1; j <=n; j++){
			cin >> b[i][j];
		}
	}
	for(int i =1; i <=n; i++){
		for(int j = 1; j <=n; j++){
			if(b[i][j]) a[i].push_back(j);
		}
	}
	for(int i =1;i <=n; i++){
		cout << i <<":";
		for(auto x:a[i]) cout << x <<" ";
		cout << endl;
	}
}