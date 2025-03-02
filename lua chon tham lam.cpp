#include<bits/stdc++.h>

using namespace std;

int n;
string tmin(int x,int s,string str){
	if(x>=n){
		return str;
	}
	if((n-x)*9<s|| s==0){
		return "-1";
	}
	int t;
	if(x==0){
		t = 1;
	}
	else t = 0;
	x++;
	while((n-x)*9 < s-t){
		t++;
	}
	str += to_string(t);
	 return tmin(x,s-t,str);
}
string tmax(int x,int s,string str){
	if(x>=n){
		return str;
	}
	if((n-x)*9<s|| (s==0 && x==0)){
		return "-1";
	}
	int t;
	if(s>9){
		t=9;
	}
	else {
		t =s;
	}
	x++;
	str += to_string(t);
	return tmax(x,s-t,str);
}
int main(){
	int s;
	cin >> n >> s;
	string t = tmin(0,s,"");
	cout << t <<" " << tmax(0,s,"")<< endl;
}