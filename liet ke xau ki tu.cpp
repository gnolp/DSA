#include<bits/stdc++.h>

using namespace std;
char a[1001];
int k;
char c;
void in(){
	for(int i = 1; i <= k; i++){
		cout << a[i];
	}
	cout <<endl;
}
void Try(int i){
	for(char j ='A'; j <=c; j++){
		if((int)j>=(int)a[i-1]){
			a[i] = j;
			if(i==k) in();
			else Try(i+1);
		}
	}
}
int main(){
	cin >> c;
	cin >> k;
	a[0] = 'A'-1;
	Try(1);
}