#include<bits/stdc++.h>

using namespace std;

int a[1005][1005];


int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0); 
	int test; cin >> test;
	while(test--){
		int n,m;
		cin >> n >> m;
		int area = 0;
		pair<int,int> canh;
		memset(a,0,sizeof(a));
		for(int i =0; i<n; i++){
			for(int j = 0; j<m; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 1; i<n; i++){
			for(int j =0; j<m; j++){
				if(a[i][j]!=0) a[i][j] += a[i-1][j];
			}
		}
//		cout << 1 << endl;
		for(int i = 0; i<n; i++){
			int l[1004];
			int r[1005];
//			memset(l,0,sizeof(l));
//			memset(r,0,sizeof(r));
			stack<int> b;
			for(int j = m-1; j>=0; j--){
				while(!b.empty() and a[i][b.top()] >= a[i][j]){
					b.pop();
//					cout <<"r" << endl;
				}
				if(b.empty()) r[j] = -1;
				else r[j] = b.top();
				b.push(j);
			}
			stack<int> c;
			for(int j =0; j<m; j++){
				while(!c.empty() and a[i][c.top()] >= a[i][j]){
					c.pop();
//					cout <<"l" << endl;
				}
				if(c.empty()) l[j] = -1;
				else l[j] = c.top();
				c.push(j);
			}
			for(int j= 0; j < m ; j++){
				int tmp = 0;
				int le,ri;
				if(l[j]==-1){
					tmp += a[i][j]*(j+1);
					le = j+1;
				}
				else {
					tmp += a[i][j]*(j-l[j]);
					le = j-l[j];
				}
				if(r[j]==-1){
					tmp += a[i][j]*(m-j-1);
					ri = m-j-1;
				}
				else{
					tmp += a[i][j]*(r[j]-j-1);
					ri = r[j]-j-1;
				} 
				if(area == tmp){
					if(abs(canh.first-canh.second) > abs(a[i][j]- ri-le))
						canh = {a[i][j], ri+le};
				}
//				cout << tmp  <<" a"<< endl;
				if(area < tmp){
					area = tmp;
					canh = {a[i][j],ri+le};
				}
			}
		}
		cout << area << endl;
		cout << canh.first <<" " << canh.second << endl;
	}
}