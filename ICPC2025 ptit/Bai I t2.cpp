#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

ull comb(int n, int k, ull limit){
	if(k>n || k < 0) return 0;
	ull res = 1;
	for(int i = 1;i <= k; i++){
		res *= n -i + 1;
		res /= i;
		if(res > limit) return limit + 1;
	}
	return res;
}

int main(){
	int a,b; cin >> a >> b;
	ull k; cin >> k;
	string result = "";
	while(a>0 || b>0){
		ull a_first = comb(a+b-1,a-1,k);
		if(a==0){
			result += "b";
			b--;
		} else if(b==0){
			result += "a";
			a--;
		} else if(k <= a_first){
			result += "a";
			a--;
		} else{
			result += "b";
			k -= a_first;
			b--;
		}
	}
	cout << result << endl;
}