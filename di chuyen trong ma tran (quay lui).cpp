#include <bits/stdc++.h>
using namespace std;
int a[105][105];
int cnt;
void thu(int i, int j, int n, int m)
{
    if (i == n-1 && j == m-1)
    {
        cnt++;
    }
    if (i+1 < n)
    {
        thu(i+1, j, n, m);
    }
    if (j+1 < m)
    {
        thu(i, j+1, n, m);
    }
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        cnt = 0;
        thu(0,0,n,m);
        cout << cnt << endl;
    }
    
}