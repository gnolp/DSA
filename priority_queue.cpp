#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k; cin >> n >> k;
	priority_queue<long long,vector<long long>,greater<long long>> q;
	int x;
	for(int i = 0; i <n; i++){
		cin >> x;
		q.push(x);
	}
	long long ans = 0;
//	cout << q.top() << endl;
//	cout << q.size() << endl;
	while(!q.empty()&&q.size()>1){
		if(k>=q.size()){
			int min = q.top();
			int ne = 0;
			while(!q.empty()){
				ne+=q.top();
				if(q.size()==1){
					ans += q.top()-min;
				}
				q.pop();
				
			}
			q.push(ne);
		}
		else{
			int c = k;
			int min = q.top();
			int ne = 0;
			while(c--){
				ne += q.top();
				if(c==0){
//					cout << q.top() <<" ";
					ans += q.top() - min;
//					cout << ans << " ";
				}
				q.pop();
			}
//			cout << ne <<" " << q.size() << endl;
			q.push(ne);
		}
	}
	cout << q.top() << endl;
	cout << ans;
}