/*#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n];
		for(int i = 0;i<n;i++){
			cin >> a[i];
		}
		int b[n];
		b[n-1] = -1;
		for(int i = n-2; i>=0; i--){
			if(a[i+1] > a[i]) b[i] = a[i+1];
			else if(a[i] == a[i+1]){
				b[i] = b[i+1];
			}
			else{
				for(int j = i+1 ; j <n;j++){
					b[i] = -1;
					if(a[j] > a[i]){
						b[i] = a[j];
						break;
					}
					else if(a[j]==a[i]){
						b[i] = b[j];
						break;
					}
				}
			}
		}
		for(int i = 0; i<n;i++) cout << b[i] <<" ";
		cout << endl;
	}
}
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n],r[n];
		for(int i = 0;i<n; i++) cin >> a[i];
		stack<int> st;
		for(int i = n-1; i>=0; i--){
			while (!st.empty() && st.top() <= a[i]) {
	            st.pop();
	        }
	        if (st.empty()) r[i] = -1;
	        else r[i] = st.top();
	        st.push(a[i]);
		}
		for(int i =0; i <n; i++) cout << r[i] <<" ";
		cout << endl;
	}
}
