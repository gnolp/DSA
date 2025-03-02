#include<bits/stdc++.h>

using namespace std;

string ca[101];

string add(string a,string b){
	int n1 = a.length(), n2 = b.length();
	string z= a;
	while(n1>n2){
		b = "0"+b;
		n2++;
	}
//	cout << a << endl << b << endl;
	int du = 0;
	for(int i = n1-1; i>=0; i--){
		z[i] = ((a[i]-'0') + (b[i]-'0') + du ) %10 +'0';
		du = ((a[i]-'0') + (b[i]-'0') + du )/10;
	}
	if(du){
		z = "1"+z;
	}
	return z;
}
string mul(string a,string b){
	string ans ="0";
	int n2 = b.length()-1;
	for(int i = n2; i>=0; i--){
		string x = a;
		int tmp = i;
		while(tmp < n2){
			x = x+"0";
			tmp++;
		}
		string y =x;
		int nho = 0;
		for(int j =x.length()-1; j>=0; j--){
			y[j] = ((x[j]-'0')*(b[i]-'0')+nho) % 10 +'0';
			nho = ((x[j]-'0')*(b[i]-'0')+nho) / 10;
		}
		if(nho!=0){
			string tmp = to_string(nho);
			y = tmp + y;
		}
		if(ans.length()<=y.length()){
			ans = add(y,ans);
		}
		else{
			ans = add(ans,y);
		}
	}
	return ans;
}
void unit(){
	ca[0] = "1";
	ca[1] = "1";
	ca[2] = "2";
	for(int i = 3; i<=100; i++){
		string tmp = "0";
		for(int j = 0; j <i ; j++){
			string t = mul(ca[i-j-1],ca[j]);
//			cout << t << endl;
			if(tmp.length()>=t.length()){
				tmp = add(tmp,t);
			}
			else tmp = add(t,tmp);
		}
		ca[i] = tmp;
	}
}

int main(){
	unit();
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		cout << ca[n] << endl;
	}
}