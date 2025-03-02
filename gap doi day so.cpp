#include<bits/stdc++.h>

using namespace std;
long long a[55];

void init(){
	for(int i =0; i < 51; i++){
		a[i] = pow(2,i);
	}
}

int main(){
	int test; cin >> test;
	init();
	while(test--){
		long long n, k;
        cin >> n >> k;
        for (int i = n; i >= 0; i--)
        {
            if (k == a[i-1])
            {
                cout << i << endl;
                break;
            }
            else if (k > a[i-1])
                k -= a[i-1];
        }
	}
}