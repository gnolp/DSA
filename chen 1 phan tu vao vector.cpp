#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,x;
    cin >> n;
    vector<int> a;
    while(n--){
    	int x;
    	cin >> x;
    	a.push_back(x);
	}
	cin >> k >> x;
    a.insert(a.begin()+k,x);
    for(auto it:a) cout << it <<" ";
    return 0;
}