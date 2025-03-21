#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, a[20];
vector<int> x;
vector<vector<int>> ans;
map<vector<int>, int> m;
bool nto(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
void Try(int k, int s)
{
    for (int i = k + 1; i <= n; i++)
    {
        Try(i, s);
        x.push_back(a[i]);
        if (nto(s + a[i]))
        {
            if (m[x] == 0)
            {
                m[x]++;
                ans.push_back(x);
            }
        }
        Try(i, s + a[i]);
        x.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ans.clear();
        m.clear();
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1, greater<int>());
        Try(0, 0);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
                cout << ans[i][j] << " ";
            cout << endl;
        }
    }
}