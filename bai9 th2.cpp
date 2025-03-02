#include<bits/stdc++.h>

using namespace std;

struct data{
	int val;
	int fee;
};

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		data a[n];
		for(int i =0; i <n; i++){
			cin >> a[i].val;
			cin >> a[i].fee;
		}
		long long ans = 0;
		for(int i = 1; i<n; i++){
			if(a[i].val == a[i-1].val){
				if(a[i].fee < a[i-1].fee){
					if(i+1 < n && a[i+1].val>=a[i].val){
						a[i].val --;
						ans += a[i].fee;
					}
					else if(i+1<n && a[i+1].val < a[i].val){
						a[i].val++;
						ans += a[i].fee;
					}
					else if(i+1==n){
						a[i].val++;
						ans += a[i].fee;
					}
				}
				else{
					if(i-2 >=0 && a[i-2].val>=a[i-1].val){
						a[i-1].val --;
						ans += a[i-1].fee;
					}
					else if(i-2>=0 && a[i-2].val < a[i-1].val){
						a[i-1].val++;
						ans += a[i-1].fee;
					}
					else if(i-2<0){
						a[i-1].val--;
						ans += a[i-1].fee;
					}
				}
			}
		}
		cout << ans << endl;
	}
}