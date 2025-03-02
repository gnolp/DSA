#include<bits/stdc++.h>

using namespace std;


void in(int a[],int n){
	for(int i =0; i <n; i++){
		cout << a[i] <<" ";
	}
	cout << endl;
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i =0; i <n; i++){
		cin >> a[i];
	}
	int cnt = 0;
	bool ok = 0;
	for(int i = 0; i <n; i++){
		ok = 0;
		for(int j = 0; j <n-1; j++){
			if(a[j] > a[j+1]){
				ok = 1;
				swap(a[j],a[j+1]);
			}
		}
		if(ok){
			cnt++;
			cout << "Buoc "<< cnt <<": ";
			in(a,n);
		}
	}
}


//5 3 2 7
//3 2 5 7