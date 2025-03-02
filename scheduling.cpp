#include<bits/stdc++.h>

using namespace std;
const int N = 2e5+5;
struct job{
	int st,ed,p;
	bool operator < (job &o){
		return (ed < o.ed);
	}
};
job a[N];
long long dp[N];
int n; 


int get(int i){
	int l = 1, r = i-1;
	int tmp = -1;
	while(l<=r){
		int m= ( l + r )/2;
		if(a[m].ed < a[i].st){
			l = m+1;
			tmp = m;
		}
		else r = m-1;
	}
	return tmp;
}
int main(){
	cin >> n;
	for(int i = 1; i<=n; i++){
		cin >> a[i].st >> a[i].ed >> a[i].p;
	}
	sort(a+1,a+1+n);
	dp[1] = a[1].p;
	for(int i = 2; i<=n; i++){
		int j = get(i);
		long long tmp = a[i].p;
		if(j != -1) tmp += dp[j];
		dp[i] = max(dp[i-1],tmp);
	}
	cout << dp[n] << endl;
}