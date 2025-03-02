#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int cnt2=0, cnt5=0;
	for(int i = 2; i<=n; i*=2){
		cnt2 += n/i;
	}
	for(int i =5; i<=n; i*=5){
		cnt5 += n/i;
	}
//	cout << cnt2 << cnt5 << endl;
	if(cnt2<cnt5) cout << cnt2;
	else cout << cnt5;
	return 0;
}