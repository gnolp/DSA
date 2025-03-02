#include<bits/stdc++.h>
using namespace std;
bool check(int n, int a[])
{
    if (a[n-1] != 0)
    {
        return false;
    }
    
    for (int i = 0; i < n-1; i++)
    {
        if (a[i] == 1 && a[i+1] == 1)
        {
            return false;
        }
        if (i < n-3 && a[i] == 0 && a[i+1] == 0 && a[i+2] == 0 && a[i+3] == 0)
        {
            return false;
        }
    }
    return true;
}
void sinh(int n, int a[])
{
    while (true)
    {
        if (check(n, a))
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 0)
                {
                    cout << 6;
                }
                else cout << 8;
            }
            cout << endl;
        }
        int i = n-1;
        while (i >= 0 && a[i] == 1)
        {
            a[i] = 0;
            i--;
        }
        if (i < 0)
        {
            return;
        }
        a[i]++;
    }
    
}
int main()
{
    int n;
    cin >> n;
    int a[n+5];
    a[0] = 1;
    for (int i = 1; i < n; i++)
    {
        a[i] = 0;
    }
    if (n >= 6)
    {
        sinh(n, a);
    }
    return 0;
}