#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fi first
#define se second
#define str string
#define pb push_back
#define sz size()

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a[200001], f[200001];

    memset(a, 0, sizeof(a));
    memset(f, 0, sizeof(f));

    int n,k,q; 
    cin >> n >> k >> q;

    while(n--){
    	int l,r; 
    	cin >> l >> r;
    	a[l]++; a[r+1]--;
    }

    for (int i=1; i<=200000; i++){
    	a[i] += a[i-1];
    }

    for (int i=0; i<=200000; i++){
    	if (a[i] >= k){
    		a[i] = 1;
    	}
    	else{
    		a[i] = 0;
    	}
    }

    f[0] = a[0];

    for (int i=1; i<=200000; i++){
    	f[i] = a[i] + f[i-1];
    }

    while(q--){
    	int l,r; 
    	cin >> l >> r;
    	cout << f[r] - f[l-1] << endl;
    }

    return 0;
}