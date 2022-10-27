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
    cin >> n;
    vector<ll> v(10);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x % 10]++;
    }
    bool f = false;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j && v[j] < 2)
                continue;
            for (int k = 0; k < 10; k++)
            {
                if (i == j && j == k && v[j] < 3)
                    continue;
                if (i == k && v[i] < 2)
                    continue;
                if (j == k && v[j] < 2)
                    continue;
                if (v[i] && v[j] && v[k] && (i + j + k) % 10 == 3)
                    f = 1;
            }
        }
    }
    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
