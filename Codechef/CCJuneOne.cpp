#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    if (x & 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        if (y & 1)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}