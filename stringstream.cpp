#include<bits/stdc++.h>

using namespace std;

int main(){
	string s ="toi-yeu-em";
	stringstream ss(s);
	string word;
	while(getline(ss,word,'-')){
		cout << word <<" ";
	}
}