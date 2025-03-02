#include<bits/stdc++.h>

using namespace std;
int a[1000];
int n,k;
vector<int> v;
void init(){
	for(int i= 0 ; i <k; i++){
		a[i] = i+1;
	}
}
void in(){
	for(int i =0; i <k; i++) cout << v[a[i]-1] <<" ";
	cout <<endl;
}
void sinh(){
	int i = k-1;
	while(a[i] == n-k+i+1) {
		i--;
	}
	if(a[i] <= n-k+i && i >=0){
		a[i]++;
		for(int j =i+1; j<k; j++){
			a[j] = a[j-1]+1;
		}
		in();
		sinh();
	}
}
int main(){
		cin >> n >>k;
		set<int> s;
		for(int i = 0; i <n;i++){
			int x; cin >> x;
			s.insert(x);
		}
		for(auto x:s){
			v.push_back(x);
		}
		n = v.size();
		init();
		in();
		sinh();
		cout << endl;
	return 0;
}