#include<bits/stdc++.h>

using namespace std;


bool cmp(int a, int b){
	return a >b;
}
int main(){
	int test; cin >> test;
	while(test--){
		int k; cin >> k;
		cin.ignore();
		string s; cin >> s;
//		cout << s << endl;
		int a[300]={};
		map<int,int> m;
		for(int i =0; i <s.length(); i++){
			a[s[i]]++;
		}
		int mA = -1;
		for(int i = 0 ; i <300; i ++){
			if(a[i]!=0){
				m[a[i]]++;
				mA = max(mA,a[i]);
			}
		}
//		for(auto x:m){
//			cout << x.first << " " << x.second << endl;
//		}
		if(k>=s.length()){
			cout << 0 << endl;
		}
		else{
			auto it = m.end();
			it--;
//			cout << it->first <<" " << it->second << endl;
			while(k>0){
				if(it->second > k){
					it->second -=k;
					m[it->first-1]+=k;
					k=0;
				}
				else{
//					cout << k << it->second << endl;
					k -= it->second;
					
//					cout << it->first-1 <<".";
					m[it->first-1] += it->second;
					it->second = 0;
//					cout << m[it->first-1] << endl;
					it--;
				}
			}
			long long res = 0;
			for(auto x:m){
				while(x.second--){
					res += x.first*x.first;
				}
			}
			cout << res << endl;
		}
	}
}