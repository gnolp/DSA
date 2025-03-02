#include<bits/stdc++.h>

using namespace std;

int n;
long long a[101];
long long s;
int ans;
void Try(int i,long long tong,int cnt){
	if(tong>=s || cnt >= ans || i >=n){
		if(cnt >= ans) return;
		if(tong == s) ans = cnt;
		return;
	}
	Try(i+1,tong+a[i],cnt+1);
	Try(i+1,tong,cnt);
}

int main(){
	cin >> n >> s;
	for(int i =0; i <n; i++) cin >> a[i];
//	sort(a,a+n);
	ans = 35;
	Try(0,0,0);
	if(ans==35) cout << -1;
	else cout << ans;
}