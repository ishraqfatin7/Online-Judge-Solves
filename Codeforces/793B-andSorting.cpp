#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n;
    cin >> n;
    int ans = (1 << 30) - 1;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x != i)
        {
            ans &= x;
        }
    }
    cout << ans << "\n";
    
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