#include <bits/stdc++.h>
using namespace std;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using ll = long long;

void solve(int i)
{
    int x;
    cin >> x;
    if (x & 1)
    {
        cout << (x > 1 ? 1 : 3) << endl;
    }
    else
    {
        if (!(x & (x - 1)))
            cout << x + 1 << endl;
        else
            cout << ((x & ~(x - 1))) << endl;
    }
}

int main()
{
    FAST;
    int tt;
    cin >> tt;
    // while (tt--)
    for (int i = 1; i <= tt; i++)
    {
        solve(i);
    }
}