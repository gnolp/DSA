#include<bits/stdc++.h>

using namespace std;

int n,k;
int a[1001];
int ans;
bool ok;
void Try(int i, int s,int cnt){
	if(i>=n || s>=k || cnt > ans){
		if(cnt > ans)
		return;
		if(s==k){
			ok = true;
			ans = cnt;
		}
		return;
	}
	if(s<=k){
		Try(i+1,s+a[i],cnt+1);
	}
	Try(i+1,s,cnt);
}

int main(){
	int test; cin >> test;
	while(test--){
		ok = false;
		ans = INT_MAX;
		cin >> n >> k;
		for(int i =0; i <n; i++){
			cin >> a[i];
			if(a[i]==k) ok = true;
		}
		if(ok) cout << 1 << endl;
		else{
			Try(0,0,0);
			if(ok)
			cout << ans << endl;
			else cout <<-1 << endl;
		}
	}
}