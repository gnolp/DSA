#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	char a[n];
	int blue = 0, red= 0, white = 0;
	for(int i =0; i<n; i++){
		cin >> a[i];
		if(a[i]=='T'){
			white++;
		}
		else if(a[i]=='D') red++;
		else blue ++;
	}
	int cnt = 0;
	int post = blue;
	int posd = n-1;
	for(int i =0; i <blue; i++){
		if(posd<=post) break;
		if(a[i]=='T'){
			for(int j = post; j <n; j++){
				if(a[j]=='X'){
					swap(a[j],a[i]);
					cnt++;
					break;
				}
			}
		}
		else if(a[i]=='D'){
			for(int j = posd; j> blue; j--){
				if(a[j]=='X'){
					swap(a[j],a[i]);
					cnt++;
					break;
				}
			}
		}
	}
	for(int j = blue; j < blue+white; j++){
		if(a[j]!='T') cnt++;
	}
	cout << cnt;
}