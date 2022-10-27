#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve()
{
    int n;
    while (cin >> n)
    {
        int ans = n;
        while (n >= 3)
        {
            ans += n / 3;
            n = n / 3 + n % 3;
        }
        if (n == 2)
            ans++;
        cout << ans << endl;
    }
}

int main()
{
    // int tt;
    // cin >> tt;
    // while (tt--)
    // {
    //     solve();
    // }
    solve();
}
