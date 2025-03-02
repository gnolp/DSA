#include<bits/stdc++.h>

using namespace std;

int n,k,s;
int a[20];
int res;
int i;
void Try(int cnt){
	int tmp = a[i];
	if(i==n){
		if(cnt == k) res++;
		if(cnt>k) res = 0;
		return;
	}
	while(tmp != s){
		i++;
		tmp+= a[i];
	}
//	cout << tmp <<"." << endl;
	if(tmp == s and i<n){
		cnt++;
		i++;
//		cout << cnt << endl;
		int x = i;
/*		while(a[x]==0 and x<n){
			res++;
			x++;
		}*/
		int tong = a[i];
		if(tong ==0 and i<n) res++;
		for(int j = i+1; j<n; j++){
			tong += a[j];
			if(tong==0) res++;
		}
//		cout << res <<";;" << endl;
		Try(cnt);
	}
}

int main(){
	int test=1;
	while(test--){
		cin >> n >> k;
		memset(a,0,sizeof(a));
		for(int i = 0; i<n; i++){
			cin >> a[i];
			s += a[i];
		}
		if(s%k==0){
			i = 0;
			s = s/k;
			res = 0;
			Try(0);
			cout << res << endl;
		}
		else{
			cout << 0 << endl;
		}
	}
}