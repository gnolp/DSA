#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	cin.ignore();
	char a[n];
	string s =".";
	for(int i =0;i<n; i++){
		cin >> a[i];
	}
	for(char x:a) s= s+ x+".";
	int cnt = 0;
	cout << s << endl;
	n = s.length();
	for(int i = 1; i <n-1; i++){
		int d = 1;
//		cout<<"i la: "<< i << endl;
		while(d){
			if(i-d>=0 && i+d<n &&s[i+d]==s[i-d]){
				cnt++;
				if(s[i+d]=='.' && d!=1) cnt--;
//				cout << "so luong: " << cnt << endl;
//				cout << s[i-d] << s[i] << s[i+d] << endl;
				d++;
			}
			else break;
		}
	}
	
	cout << cnt << endl;
}