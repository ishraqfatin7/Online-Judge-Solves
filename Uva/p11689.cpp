#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve()
{
    int empty, add, bottle;
    cin >> empty >> add >> bottle;
    int total = empty + add;
    int ans = 0;

    while (total >= bottle)
    {
        ans += total / bottle;

        total = total / bottle + (total % bottle);
    }
    cout << ans << endl;
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
