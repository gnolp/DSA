#include<bits/stdc++.h>

using namespace std;

int a[1001],n;
bool ok;
vector<vector<int>> st;

void nhet(){
	vector<int> b(a,a+n);
	st.push_back(b);
}
void in(vector<int> b){
	for(int i = 0; i <n; i++){
		cout << b[i] <<" ";
	}
}
void d(int i){
	if(i<=n){
		ok = 0;
		for(int j = i-1; j <n; j++){
			if(a[i-1] > a[j]){
				ok = 1;
				swap(a[i-1],a[j]);
			}
		}
		if(ok) nhet();
		d(i+1);
	}
}

int main(){
	int test; cin >> test;
	while(test--){
		cin >> n;
		for(int i =0; i <n; i++) cin >> a[i];
		int i= 1;
		d(i);
		i = st.size();
		for(i;i>=1; i--){
			cout << "Buoc " << i << ": ";
			in(st[i-1]);
			cout << endl;
		}
		st.clear();
	}
	return 0;
}