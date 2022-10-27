#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
void solve()
{   ll x;
    cin >> x;
    if (x >= 1 && x <= 9)
        cout << x << endl;
    else if (x >= 10 && x <= 17)
        cout << 19 + (x - 10) * 10<< endl;
    else if (x >= 18 && x <= 24)
        cout << 189 + (x - 18) * 100<< endl;
    else if (x >= 25 && x <= 30)
        cout << 1789 + (x - 25) * 1000 << endl;
    else if (x >= 31 && x <= 35)
        cout << 16789 + (x - 31) * 10000 << endl;
    else if (x >= 36 && x < 40)
        cout << 156789 + (x - 36) * 100000 << endl;
    else if (x >= 40 && x < 43)
        cout << 1456789 + (x - 40) * 1000000 << endl;
    else if (x >= 43 && x < 45)
        cout << 13456789 + (x - 43) * 10000000 << endl;
    else if (x == 45)
        cout << 123456789 + (x - 45) * 100000000 << endl;
}

int main()
{   FAST;
    ll tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}