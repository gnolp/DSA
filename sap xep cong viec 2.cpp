#include<bits/stdc++.h>

using namespace std;

struct job{
	int id, dl, profit;
};
bool cmp(job a,job b){
	return a.profit > b.profit;
}

void inp(job *a){
	cin >> a->id >> a->dl >> a->profit;
}
int main(){
	int test;
	cin >> test;
	while(test--){
		int time[1001];
		memset(time,0,sizeof(time));
		int n; cin >> n;
		job a[n];
		for(int i= 0; i <n; i++){
			inp(&a[i]);
		}
		sort(a,a+n,cmp);
		
		int ans = 0;
		int cv = 0;
		for(int i = 0; i <n; i++){
			for(int j = a[i].dl;j >0; j--){
				if(time[j]==0){
					time[j] = 1;
					ans += a[i].profit;
					cv++;
//					cout << a[i].id <<" " << a[i].profit << endl;
					break;
				}
			}
		}
		cout << cv <<" " << ans << endl;
 	}
}