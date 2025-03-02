#include<bits/stdc++.h>

using namespace std;

int n, ans;
string a[101], b[101];
bool vs[101];

void Try(int i,int cnt){
	if(i>n){
		ans = min(ans,cnt);
		return;
	}
	for(int j = 1; j<=n; j++){
		if(!vs[j]){
			vs[j] = true;
			b[i] = a[j];
			
			int d[127]={};
			for(char c:b[i]) d[c]++;
			for(char c: b[i-1]) d[c]++;
			int dem = 0;
			for(int k = 'A'; k<='Z';k++){
				if(d[k]==2) dem++;
			}
			if(cnt+dem < ans)
				Try(i+1,cnt+dem);
			vs[j] = false;
		}
	}
}

int main(){
	ans=INT_MAX;
	cin >> n;
	for(int i = 1; i <=n; i++){
		cin >> a[i];
	}
	
	Try(1,0);
	cout << ans << endl;
}