#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >>n;
		int a[n];
		for(int &i:a) cin >> i;
		stack<int> st;
		int b[n];
		for(int i =0; i <n; i++) b[i] =1;
		for(int i =0; i <n; i++){
			while(!st.empty() && a[i] >= a[st.top()]){
				b[i] += b[st.top()];
				st.pop();
			}
			st.push(i);
		}
		for(int i:b) cout << i<<" ";
		cout << endl;
	}
}