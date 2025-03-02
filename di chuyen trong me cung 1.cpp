#include <bits/stdc++.h>
using namespace std;
int a[15][15];
vector <char> kq;
bool check;
void in()
{
    for (auto x:kq)
    {
        cout << x;
    }
    cout << " ";
}
void thu(int i, int j, int n)
{
    if (i == n-1 && j == n-1)
    {
        in();
        check = true;
    }
    if (i+1 < n && a[i+1][j] == 1)
    {
        kq.push_back('D');
        thu(i+1, j, n);
        kq.pop_back();
    }
    if (j+1 < n && a[i][j+1] == 1)
    {
        kq.push_back('R');
        thu(i, j+1, n);
        kq.pop_back();
    }
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        check = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        if (a[0][0] != 0)
        {
            thu(0, 0, n);
        }
        if (!check)
        {
            cout << -1;
        }
        cout << endl;
    }
}