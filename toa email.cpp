#include<bits/stdc++.h>

using namespace std;
string chuanhoa(string s){
	vector<string> words;
	string keys="";
	string word;
	stringstream ss(s);
	while(ss>>word){
		word[0] = tolower(word[0]);
		keys += word[0];
	}
	keys.erase(keys.end()-1);
	for(int i =0; i < word.length(); i++){
		word[i] = tolower(word[i]);
	}
	keys = word + keys;
	return keys;
}
int main(){
	int test; cin >> test;
	cin.ignore();
	while(test--){
		string s; getline(cin,s);
		string email = chuanhoa(s) +"@gmail.com";
		cout << email << endl;
	}
}