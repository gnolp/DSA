#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[k];
        map <int, int> mp;
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int i = k-1;
        while (i >= 0 && a[i] == n+i-k+1)
        {
            i--;
        }
        int cnt = 0;
        if (i < 0)
        {
            cnt = k;
        }
        else
        {
            a[i]++;
            if (mp[a[i]] == 0)
            {
                cnt++;
            }
            for (int j = i+1; j < k; j++)
            {
                a[j] = a[j-1]+1;
                if (mp[a[j]] == 0)
                {
                    cnt++;
                }
                
            }
        }
        cout << cnt << endl;
    }
    
}
