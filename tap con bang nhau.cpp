#include<bits/stdc++.h>

using namespace std;

int a[1001];
int n;
int used[1001];
int s;
int ok;

// 1 5 11 5
void Try(int pos, int k)
{
    if (ok)
        return;
    if (2 * k == s)
    {
        ok = 1;
        return;
    }
    if (pos < n)
    {
        if (2 * (k + a[pos]) <= s)
            Try(pos + 1, k + a[pos]);
        Try(pos + 1, k);
    }
}

int main(){
	int test; cin >> test;
	while(test--){
		cin >> n;
		s =0;
		ok = 0;
		for(int i =1;i<=n; i++){
			cin >> a[i];
			s += a[i];
		}
		if(s%2==0){
			Try(1,0);
			if(ok) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else cout <<"NO" << endl;
	}
}