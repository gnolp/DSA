#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	vector<int> a(n),b(n);
	for(int i =0; i<n; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	b[0] = a[0];
	for(int i = 1; i<n; i++){
		b[i] = a[i] + b[i-1];
	}
	for(int i = 3; i< n; i++){
		if(a[i] < b[i-1]){
			cout << "Yes";
			return 0;
		}
	}
	cout <<"No";
	return 0;
}