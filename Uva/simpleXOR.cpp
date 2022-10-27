

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int l, r;
    cin >> l >> r;
    l += (l % 2);
    if (l + 3 > r)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        for (int i = 0; i <= 3; i++)
        {
            cout << l + i << " ";
        }
        cout << endl;
    }
}

// Driver code
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }

    return 0;
}