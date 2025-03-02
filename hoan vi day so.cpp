#include<bits/stdc++.h>

using namespace std;

int a[1001];

int n;
vector<int> v;
void init(){
	for(int i =0 ; i<n;i++){
		a[i]=i+1;
	}
}
void in(){
	for(int i=0;i<n;i++){
		cout<< v[a[i]-1] <<" ";
	}
	cout<< endl;
}
void sinh(){
	int i =n-1;
	while(a[i]<a[i-1]){
		i--;
	}
	sort(a+i,a+n);
	for(int j = i; j<n;j++){
		if(a[j]>a[i-1]){
			swap(a[j],a[i-1]);
			break;
		}
	}
	if(i>0){
		in();
		sinh();
	}
}

int main(){
		cin>>n;
		set<int> s;
		for(int i =0; i <n; i++){
			int x; cin >> x;
			s.insert(x);
		}
		for(auto x:s){
			v.push_back(x);
		}
		init();
		in();
		sinh();
		cout  << endl;
}