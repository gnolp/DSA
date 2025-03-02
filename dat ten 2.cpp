#include<bits/stdc++.h>

using namespace std;
char v[256];

int a[1001];
int n,k;

void in(){
	for(int i = 0; i <k; i++){
		char x = 'A';
		x += a[i]-1;
		cout << x;
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
	int test; cin >> test; 
	while(test--){
		cin >> n >> k;
		for(int i = 0; i<k; i++){
			a[i] = i+1;
		}
		in();
		sinh(n);	
	}
	return 0;
}