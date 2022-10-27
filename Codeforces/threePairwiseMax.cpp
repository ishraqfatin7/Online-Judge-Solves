#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll LCM(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{

    int tt;
    cin >> tt;
    while (tt--)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        if (x == y && x >= z)
        {
            cout << "YES" << endl;
            cout << x << " " << z << " " << 1 << endl;
        }
        else if (x == z && x >= y)
        {
            cout << "YES" << endl;
            cout << x << " " << y << " " << 1 << endl;
        }
        else if (y == z && y >= x)
        {
            cout << "YES" << endl;
            cout << y << " " << x << " " << 1 << endl;
        }
        else
            cout << "NO" << endl;
    }
}