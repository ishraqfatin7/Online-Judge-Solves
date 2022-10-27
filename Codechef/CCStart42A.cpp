#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int mn[n];
    int mx[n];
    mn[0] = v[0];
    mx[0] = v[0];
    int mxt = 0, mnt = 0;
    bool f = true;
    for (int i = 1; i < n; i++)
    {
        int x = v[i];

        if (x <= mn[mnt])
        {
            mnt++;
            mn[mnt] = x;
        }
        else
        {
            mnt++;
            mn[mnt] = mn[mnt - 1];
        }
        if (x >= mx[mxt])
        {
            mxt++;
            mx[mxt] = x;
        }
        else
        {
            mxt++;
            mx[mxt] = mx[mxt - 1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == mn[i] || v[i] == mx[i])
        {
            continue;
        }
        else
        {
            f = false;
            break;
        }
    }
    if (f)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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