#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int a,b; cin >> a >> b;
		queue<pair<int,int>> q;
		q.push({a,0});
		int v[20005] = {};
		int ans = -1;
		while(!q.empty()){
			auto x = q.front();
			q.pop();
			v[x.first] = 1;
			if(x.first == b){
				ans = x.second;
				break;
			}
			else{
				if(x.first<=b and v[2*x.first]==0){
					q.push({2*x.first,x.second+1});
					v[2*x.first] = 1;
				}
				if(x.first>=1 and v[x.first-1]==0) {
					q.push({x.first-1,x.second+1});
					v[x.first-1] = 1;
				}
			}
		}
		cout << ans << endl;
	}
}