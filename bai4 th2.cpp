#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int pos[n+5];
		int high[n+5];
		for(int i =0; i <n; i++){
			cin >> pos[i];
		}
		for(int i =0; i <n; i++){
			cin >> high[i];
		}
		stack<int> c;
		int l[n+5];
		for(int i = 0;i<n; i++){
			while(!c.empty() && high[i] >= high[c.top()]){
				c.pop();
			}
			if(c.empty()) l[i] = -1;
			else l[i] = pos[c.top()];
			c.push(i);
		}
//		for(int i = 0;i<n; i++){
//			cout << l[i] <<" ";
//		}
//		cout << endl;
		long long v[n+5]={};
		for(int i = 0; i <n; i++){
			if(l[i]==-1){
				v[i] = high[i]*pos[i];
				for(int j = i- 1; j>=0; j--){
					v[i] = v[i] - v[j] - high[j];
				}
			}
			else{
				v[i] = high[i] * (pos[i]- l[i]-1);
				for(int j = i-1; j>= l[i]; j--){
					v[i] = v[i] - v[j] - high[j];
				}
			}
		}
//		for(int i =0; i <n; i++) cout << v[i] <<" ";
//		cout << endl;
		int q; cin >> q;
		while(q--){
			int k; cin >> k;
			int p = 0;
			while(k>0){
				k -= v[p];
				p++;
				if(p==n) break;
//				cout << k <<" ";
			}
			if(p!=n)
			cout << p-1 << endl;
			else cout << n << endl;
		}
	}
}