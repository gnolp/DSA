#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n;cin>> n;
		int a[n],c[n];
		int b[100005]={};
		for(int i =0; i<n; i++){
			cin >> a[i];
			b[a[i]]++;
		}
		for(int i = 0; i<n; i++){
			c[i] = b[a[i]];
		}
		int d[n];
		stack<int> st;
		for(int i = n-1; i>=0; i--){
			while(!st.empty() and c[st.top()]<= c[i]){
				st.pop();
			}
			if(st.empty()){
				d[i] = -1;
			}
			else{
				d[i] = a[st.top()];
				
			}
			st.push(i);
		}
		for(int i =0; i<n; i++) cout << d[i] <<" ";
		cout << endl;
	}
}