#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin,s);
	string era;
	cin >> era;
	stringstream ss(s);
	string word;
	while(ss>>word){
		if(word!= era){
			cout << word <<" ";
		}
	}
}