#include<bits/stdc++.h>

using namespace std;

string a[10];
int n,k;
int Min = 1e9;
int x[10];
int dd[10] = {};

int check(string s){
	for(int i = 0; i < s.length();i++){
		if(!isdigit(s[i])) return false;
	}
	return true;
}

void display(){
	set<int> temp;
	for(int i = 1; i <=n; i++){
		string s;
		for(int j = 1; j <=k; j++){
			s+= a[i][x[i]-1];
		
		}
		temp.insert(stoi(s));
	}
	if(*temp.rbegin()-*temp.begin()<Min) Min = *temp.rbegin()-*temp.begin();
	return;
}

void Try(int i){
	for(int j =1;j <=k; j++){
		if(dd[j] == 0){
			x[i] = j;
			dd[j] = i;
			if(i==k) display();
			else Try(i+1);
			dd[j] = 0;
		}
	}
}
int main(){
	cin >> n >>k;
	for(int i = 1; i <=n; i++) cin >> a[i];
	Try(1);
	cout << Min;
}