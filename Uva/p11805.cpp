#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve(int t)
{
    int n, k, p;
    cin >> n >> k >> p;
    cout << "Case " << t << ": ";
    int ans = (k + p) % n;
    if (ans == 0)
    {
        cout << n << endl;
    }
    else
        cout << ans << endl;
}

int main()
{
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        solve(i);
    }
}
