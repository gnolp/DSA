#include<bits/stdc++.h>

using namespace std;

struct data{
	int val;
	int pos;
	int c_odd;
};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	int a[n];
	vector<data> v;
	int cnt = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i]%2==0){
			data tmp;
			tmp.val = a[i];
			tmp.pos = i;
			tmp.c_odd = i;
			v.push_back(tmp);
			cnt++;
		}
		else{
			if(cnt!=0){
				v[cnt-1].c_odd = i;
			}
		}
	}
	if(cnt==n){
		cout << 0;
		return 0;
	}
	int ans = 0;
	for(int i =0; i < cnt; i++){
		bool  ok = false;
		for(int j = i+1; j< cnt; j++){
			if(!ok){
				if(v[i].val > v[j].val && v[i].c_odd !=i){
					ans++;
					ok = true;
				}
			}
			else{
				if(v[i].val>v[j].val) ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}