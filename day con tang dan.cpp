#include<bits/stdc++.h>

using namespace std;

int a[1000];
int n;
vector<string> v;
// 6 3 7 11
void Try(int i, string s,int cnt){
	if(i==n || cnt < n){
		if(cnt < n && cnt!=1) v.push_back(s);
		if(i==n)return;
	}
	for(int j = i+1; j <=n; j++){
		if(a[i] < a[j]){
			int si = s.length();
			string tmp = " " + to_string(a[j]);
			s+= tmp;
//			cout << s << endl;
			Try(j,s,cnt+1);
			s.erase(s.begin()+si,s.end());
//			Try(j,s,cnt);
		}
	}
}
int main(){
	cin >> n;
	for(int i = 1; i <=n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <=n; i++){
		string s = to_string(a[i]);
		Try(i,s,1);
	}
	sort(v.begin(),v.end());
	for(auto x:v){
		cout << x << endl;
	}
}