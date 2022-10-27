
#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve()
{
}

int main()
{
    int tt;
    while (cin >> tt)
    {
        if (!tt)
            return 0;
        ll G = 0;
        for (ll i = 1; i < tt; i++)
            for (ll j = i + 1; j <= tt; j++)
            {
                G += __gcd(i, j);
            }

        cout << G << endl;
    }
}
