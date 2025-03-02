#include<bits/stdc++.h>

using namespace std;
int n,s, ans, cnt;
int a[1001];

void Try(int i, int value, int cnt){
	if(i==n|| value>=s|| cnt > ans){
		if(value==s){
			ans = min(ans,cnt);	
		}
		return;
	}
	Try(i+1,value,cnt);
	Try(i+1,value+a[i],cnt+1);
}

int main(){
		ans= INT_MAX;
		cin >> n>>s;
		for(int i = 0; i <n; i++){
			cin >> a[i];
		}
		Try(0,0,0);
		cout << (ans==INT_MAX? -1:ans);
		cout << endl;
}