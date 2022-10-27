#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int x, n;
    cin >> n >> x;
    if (x > n)
    {
        cout << "No" << endl;
        return;
    }
    if (x == n)
    {
        cout << "Yes" << endl;
        return;
    }
    int p = 1; // number
    if (x % 2 == 0)
    {
        p = 2;
    }
    if ((n - x) % p == 0)
    {
        cout << "Yes" << endl;
        return;
    }
    cout << "No" << endl;
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