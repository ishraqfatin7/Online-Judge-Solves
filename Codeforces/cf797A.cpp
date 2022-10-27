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
    int d = n / 3;
    if (n % 3 == 0)
    {
        cout << n / 3 << " " << n / 3 + 1 << " " << n / 3 - 1 << endl;
    }
    else
    {
        int rem = n % 3;
        if (rem == 1)
        {
            cout << d << " " << d + rem + 1 << " " << d - 1 << endl;
        }
        else
        {
            cout << d + 1 << " " << d + rem << " " << d - 1 << endl;
        }
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