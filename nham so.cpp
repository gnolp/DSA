#include<bits/stdc++.h>

using namespace std;

int Min(int a){
	int tmp =0;
	while(a){
		if(a%10==6) tmp = tmp*10+5;
		else tmp = tmp*10 + a%10;
		a/=10;
	}
	int temp =0;
	while(tmp){
		temp = temp*10 + tmp%10;
		tmp/=10;
	}
	return temp;
}

int Max(int a){
	int tmp =0;
	while(a){
		if(a%10==5) tmp = tmp*10+6;
		else tmp = tmp*10 + a%10;
		a/=10;
	}
	int temp =0;
	while(tmp){
		temp = temp*10 + tmp%10;
		tmp/=10;
	}
	return temp;
}

int main(){
	int a,b;
	cin >> a >>b;
	cout << Min(a) + Min(b) << " ";
	cout << Max(a) + Max(b);
}