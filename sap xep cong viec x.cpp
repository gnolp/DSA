#include<bits/stdc++.h>

using namespace std;

struct job{
	int id, dl, profit;
};
bool cmp(job a,job b){
	return a.profit > b.profit;
}

void inp(job *a){
	cin >> a->dl >> a->profit;
}
int main(){
	int test = 1;
	while(test--){
		int time[100001];
		memset(time,0,sizeof(time));
		int n; cin >> n;
		job a[n];
		for(int i= 0; i <n; i++){
			inp(&a[i]);
		}
		sort(a,a+n,cmp);
		long long  ans = 0;
//		int cv = 0;
		int ind = 0;
		for(int i = 0; i <n; i++){
			if(a[i].dl>= 1e6){
				ind = i;
				break;
			}
				
			for(int j = a[i].dl;j >0; j--){
				if(time[j]==0){
					time[j] = 1;
					ans += a[i].profit;
//					cv++;
//					cout << a[i].id <<" " << a[i].profit << endl;
					break;
				}
			}
		}
		memset(time,0,sizeof(time));
		for(int i = ind; i	<n; i++){
			for(int j = a[i].dl-1e6;j>0; j--){
				if(time[j]==0){
					time[j] = 1;
					ans += a[i].profit;
//					cv++;
//					cout << a[i].id <<" " << a[i].profit << endl;
					break;
				}
			}
		}
		cout << ans << endl;
 	}
}