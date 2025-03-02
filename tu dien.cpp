#include<bits/stdc++.h>

using namespace std;

char a[100][100];
bool b[100][100];
set<string> tudien;
vector<string> keys;
int n,m,k;
string s;
int di[8] ={-1,-1,-1,0,0,1,1,1};
int dj[8] ={-1,0,1,-1,1,-1,0,1};

void inp(){
	keys.clear();
	tudien.clear();
	cin >> k >>n >> m;
	for(int i =0; i < k; i++){
		string word;
		cin >> word;
		tudien.insert(word);
	}
	memset(a,'0',sizeof(a));
	for(int i = 1; i <=n; i++){
		for(int j = 1; j <=m; j++){
			cin >> a[i][j];
		}
	}
	memset(b,0,sizeof(b));
}

void Try(int i, int j){
	s+=a[i][j];
	b[i][j] = true;
	if(tudien.count(s)) keys.push_back(s);
	for(int k =0; k<8; k++){
		int i1 = i+di[k];
		int j1 = j+dj[k];
		if(i1>=1 && i1<=n && j1>=1 && j1<=m && !b[i1][j1]){
			b[i1][j1] = true;
			Try(i1,j1);
			b[i1][j1] = false;
		}
	}
	s.pop_back();
	b[i][j] = false;
}

int main(){
	int test; cin >> test;
	cin.ignore();
	while(test--){
		inp();
		for(int i = 1; i <=n; i++){
			for(int j = 1; j<=m; j++){
				Try(i,j);
			}
		}
		sort(keys.begin(),keys.end());
		for(auto x:keys) cout << x <<" ";
		cout << endl;	
	}
	return 0;
}