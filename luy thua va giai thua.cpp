#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int p;
	cin >> p;
	int cnt =0;
	for(int i = p; i<=n; i*=p){
		cnt += n/i;
	}
	cout << cnt;
}