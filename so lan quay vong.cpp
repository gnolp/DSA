#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		long long a[n];
		bool ok;
		long long cnt =0;
		for(int i = 0; i <n; i++){
			cin >> a[i];
		}
		for(int i = 1; i <=n; i++){
		if (a[i] < a[i - 1]) {
            cnt = i;
            break;
        }
		}
		cout << cnt << endl;
	}
}