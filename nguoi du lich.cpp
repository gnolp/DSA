#include<bits/stdc++.h>

using namespace std;
int n, c[100][100],toiuu, cmin,res=0;
bool visited[100];
int cnt;
int a[100];
void Try(int i){
	for(int j = 2 ; j <=n; j++){
		if(!visited[j]){
			visited[j] = true;
			a[i] = j;
			res += c[a[i]][a[i-1]];
			if(i==n){
				toiuu = min(toiuu,res);
			}
			else if(res + cmin*(n-i+1) < toiuu){
				Try(i+1);
			}
			visited[j] = false;
			res-=c[a[i]][a[i-1]];
		}
	}
}

int main(){
	cin >> n;
	cmin = 1e9;
	memset(visited,false,sizeof(visited));
	for(int i = 1 ; i <=n; i++){
		for(int j =1; j <=n; j++){
			cin >> c[i][j];
			if(c[i][j]!=0)
			cmin = min(cmin,c[i][j]);
		}
	}
	int ans = 1e9+7;
	for(int i = 1; i<=n; i++){
		a[1] = i;
		memset(visited,0,sizeof(visited));
		visited[i] = true;
		toiuu = 1e9;
		Try(2);
		ans  = min(toiuu,ans);
	}
	cout << ans << endl;
//	cout << cmin << endl;
	
	
}