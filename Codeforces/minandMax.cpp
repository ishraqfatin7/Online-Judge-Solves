#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    // int sum = min(l1, l2);
    // int sum1 = max(r1, r2);
    if (r1 >= l2 && r2 >= l1)
    {
        cout << max(l1, l2) << endl;
    }

    else
        cout << l1 + l2 << endl;
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