#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int test; cin >> test;
	long long tu,mau;
	while(test--){
		cin >> tu >> mau;
		long long res;
		while(1){
			if(mau%tu==0){
				cout << "1/" << mau/tu << endl;
				break;
			}
			else{
				res = mau/tu +1;
				cout << "1/" << res << " + ";
				tu = tu*res-mau;
				mau = res*mau;
			}
		}
	}
}