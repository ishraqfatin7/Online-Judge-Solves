#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int a, b;
    cin >> a >> b;
    int c = max(a, b) - min(a, b);
    int n = a + b;

    while (a + b)
    {
        if (a)
        {
            cout << 0;
            a--;
        }
        if (b)
        {
            cout << 1;
            b--;
        }
    }

    cout << endl;
};

int main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}