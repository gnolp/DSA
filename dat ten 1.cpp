#include<bits/stdc++.h>

using namespace std;
vector<string> v;

int a[1001];
int n,k;

void in(){
	for(int i = 0; i <k; i++){
		cout << v[a[i]-1] <<" ";
	}
	cout << endl;
}
void sinh(int N){
	int i = k-1;
	while(a[i] == N-k+i+1) {
		i--;
	}
	if(a[i] <= N-k+i && i >=0){
		a[i]++;
		for(int j =i+1; j<k; j++){
			a[j] = a[j-1]+1;
		}
		in();
		sinh(N);
	}
}
int main(){
	
	cin >> n >> k;
	cin.ignore();
	set<string> s;
	for(int i = 0; i <n; i++){
		string x;
		cin >> x;
		s.insert(x);
	}
	for(auto x:s){
		v.push_back(x);
	}
	int N = v.size();
	for(int i = 0; i<k; i++){
		a[i] = i+1;
	}
	in();
	sinh(N);
}