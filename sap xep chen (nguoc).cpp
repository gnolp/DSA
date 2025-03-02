#include<bits/stdc++.h>

using namespace std;

int n, a[1001];

void d(int i,set<int> b){
	if(i>n) return;
	set<int> st(b.begin(),b.end());
	st.insert(a[i]);
	d(i+1,st);
	if(b.size())
	{
		cout <<"Buoc " << i-1 <<": ";
		for(auto x:b) cout << x << " ";
		cout << endl;
	}
}
int main(){
	cin >> n;
	for(int i=0;i<n; i++) cin >> a[i];
	d(0,{});
}