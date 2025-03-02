#include<bits/stdc++.h>

using namespace std;

int n,k,S;
int a[101];
int cnt;
bool ok;
bool visited[101];
void Try(int cnt,int s){
	if(cnt == k-1){
		ok = true;
		return;
	}
	if(ok) return;
	for(int i =0; i <n; i++){
		if(!visited[i]){
			visited[i] = true;
			if(s==S){
				Try(cnt+1,0);
			}
			else if(s<S){
				Try(cnt,s+a[i]);
			}
		}
		visited[i] = false;
	}
}

int main(){
	int test;
	cin >> test;
	while(test--){
		S = 0;
		ok = false;
		cin >> n >> k;
		memset(visited,false, sizeof(visited));
		for(int i = 0; i < n; i++ ){
			cin >> a[i];
			S += a[i];
		}
		if(S%k!=0){
			cout << 0 << endl;
		}
		else{
			S/=k;
			Try(0,0);
			if(ok){
				cout << 1 << endl;
			}
			else cout <<0 << endl;
		}
	}
}