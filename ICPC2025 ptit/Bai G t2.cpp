#include<bits/stdc++.h>

using namespace std;

long long lucas[92];

long long luc(int n){
	lucas[0] = 2;
	lucas[1] = 1;
	for(int i = 2; i<= n ; i++){
		lucas[i] = lucas[i-1] + lucas[i-2];
	}
	return lucas[n];
}

int main(){
	int n;
	cin >> n;
	cout << luc(n);
}