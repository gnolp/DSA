#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n], ng[n], rs[n];
		for(int i =0; i <n; i++) cin >> a[i];
		stack<int> st;
		stack<int> pos;
		for(int i = n-1;i>=0; i--){
			while(!st.empty() && st.top() <= a[i]){
				st.pop();
				pos.pop();
			}
			if(st.empty()) ng[i] = -1;
			else{
				ng[i] = pos.top();
			}
			st.push(a[i]);
			pos.push(i);
		}
//		for(int i = 0; i <n; i++) cout << ng[i] <<" ";

		stack<int> st1;
		for(int i = n-1; i>=0; i--){
			while(!st1.empty() && st1.top() >= a[i]){
				st1.pop();
			}
			if(st1.empty()) rs[i] =  -1;
			else rs[i] = st1.top();
			st1.push(a[i]);
		}
//		for(auto x:ng) cout << x << " ";
//		cout << endl;
//		for(auto x:rs) cout << x << " " ;
//		cout << endl;
		
		for(int i = 0 ; i < n; i++){
			if(ng[i]!=-1)
			cout << rs[ng[i]] << " ";
			else cout << -1 << " ";
		}
		cout << endl;
	}
}