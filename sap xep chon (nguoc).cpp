#include<bits/stdc++.h>

using namespace std;

int a[1001];
int n;
vector<vector<int>> st;
bool ok;
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
	if(i>=n-1) return;
	
	int pos = i;
	for(int j = i+1;j<n; j++){
		if(a[pos] > a[j]){
			pos = j;
		}
	}
	if(pos!=i){
		ok = 1;
		swap(a[i],a[pos]);
	}
	 nhet();
	d(i+1);
}

main(){
	int test=1;
	while(test--){
		cin >> n;
		for(int i = 0; i <n; i++) cin >> a[i];
		d(0);
		int i = st.size();
//		cout << i << endl;
		for(i;i>=1; i--){
			cout << "Buoc " << i <<": ";
			in(st[i-1]);
			cout << endl;
		}
	}
}