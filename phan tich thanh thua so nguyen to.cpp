#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        map<long long, int> mp;
        
        for(long long i = 2; i * i <= n; i++){
            while(n % i == 0){
                mp[i]++;
                n /= i;
            }
        }
        if(n > 1)
            mp[n] = 1;

        for(auto x : mp){
            cout << x.first << " " << x.second << endl;
        }
        cout << endl;
    }
}
