#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, y, ok = 1;
        cin >> n >> m;
        vector<vector<int>> a(n + 1);
        for (int i = 0; i < m; i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for (int i = 1; i <= n; i++)
        {
            for (auto x : a[i])
            {
                if (a[i].size() != a[x].size())
                {
                    ok = 0;
                    cout << "NO" << endl;
                    break;
                }
            }
            if (!ok)
                break;
        }
        if (ok)
            cout << "YES" << endl;
    }
}