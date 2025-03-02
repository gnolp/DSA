#include<bits/stdc++.h>

using namespace std;
// neu muon a dung truoc b thi return true
// neu muon b dung truoc a thi return false

bool cmp(int a, int b){
	return a>b;
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i =0; i < n; i++){
		a[i] = i;
	}
	sort(a+2,a+n,cmp);
	for(auto x:a) cout << x <<" ";
}