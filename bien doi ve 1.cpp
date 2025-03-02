#include<bits/stdc++.h>

using namespace std;
int n;
int a[3]={0,1,2};
int ans;
void Try(int n,int count){
	if(n==1||count>ans){
		if(n==1)
		ans = min(ans,count);
		return;
	}
	else{
		for(int i = 0; i<=2; i++){
			if(i==0 && n%3==0){
				Try(n/3,count+1);
			}
			if(i==1&&n%2==0){
				Try(n/2,count+1);
			}
			if(i==2){
				Try(n-1,count+1);
			}
		}
	}
}
int main(){
	int test; cin >> test;
	while(test--){
		cin >> n;
		ans = INT_MAX;
		Try(n,0);
		cout << ans << endl;
	}
}