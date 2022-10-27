#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll fn(int n)
{
    if (!n)
        return 0;
    int ans = 0;
    if (n % 3)
    {
        ans = n / 3 + 1;
    }
    else
    {
        ans = n / 3;
    }
    return n - ans;
}

int main()
{
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << "Case " << i << ": ";
        cout << fn(r) - fn(l - 1) << endl;
    }
}