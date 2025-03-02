#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		long long a[n];
		for(int i =0; i <n; i++) cin >> a[i];
		stack<int> b;
		int r[n];
		for(int i = n-1; i>=0;i--){
			while(!b.empty() && a[i] <= a[b.top()]){
				b.pop();
			}
			if(b.empty()) r[i] = -1;
			else r[i] = b.top();
			b.push(i);
		}
//		for(int i = 0; i <n; i++) cout << r[i] <<" ";
//		cout << endl;
		stack<int> c;
		int l[n];
		for(int i = 0;i<n; i++){
			while(!c.empty() && a[i] <= a[c.top()]){
				c.pop();
			}
			if(c.empty()) l[i] = -1;
			else l[i] = c.top();
			c.push(i);
		}
//		for(int i =0; i <n; i++) cout << l[i] <<" ";
//		cout << endl;
		long long area = -1;
		for(int i = 0; i <n; i++){
			long long tmp = 0;
			if(l[i]==-1){
				tmp += a[i]*(i+1);
			}
			else{
				tmp += a[i]*(i-l[i]);
			}
			if(r[i]==-1){
				tmp += a[i]*(n-i-1);
			}
			else{
				tmp += a[i]*(r[i]-i-1);
			}
			area = max(area,tmp);
		}
		cout << area << endl;
	}
}