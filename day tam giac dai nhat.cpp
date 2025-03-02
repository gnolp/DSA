#include<bits/stdc++.h>

using namespace std;

int i,a[100001];
int ans;
int findl(int pos,int n){
	for(int j = pos; j <n-1; j++){
		if(a[j] >= a[j+1]) return j;
	}
	return n;
}
int findr(int pos,int n){
	for(int j = pos; j <n-1; j++){
		if(a[j] <= a[j+1]) return j;
	}
	return n;
}

void solution(int n){
	while(i<n-1){
		int l,r;
		bool ok = true;
		if(a[i] == a[i+1]){
			i++;
			ok = false;
		}
		else if(a[i] < a[i+1]){
			l = findl(i,n);
			r = findr(l,n);
//			cout << i <<" " << l <<" " << r << endl;
		}	
		else{
			l = findr(i,n);
			r = l;
//			cout << a[i] <<" " << a[l] <<" " << a[r] << endl; 
		}
		if(ok){
			if(r!= n && l!= n){
				int temp = r - i + 1;
				ans = max(ans,temp);
				i = r;
			}
			else{
				int temp = n-i;
				ans = max(ans,temp);
				i = n;
			}	
		}
	}
}

int main(){
	int test; cin >> test;
	while(test--){
		int n;
		cin >> n;
		ans = 0;
		i = 0;
		for(int j = 0;j<n; j++){
			cin >> a[j];
		}
		solution(n);
		cout << ans << endl;
	}
}