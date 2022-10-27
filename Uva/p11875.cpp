#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve(int t)
{
    int n;
    cin >> n;
    cout << "Case " << t << ": ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i == n / 2)
        {
            cout << x << endl;
        }
        // break;
    }
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
