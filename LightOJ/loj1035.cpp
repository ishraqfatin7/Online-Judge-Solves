#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve(int t)
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    int curr;
    for (int i = 2; i <= n; i++)
    {
        curr = i;
        for (int j = 2; j * j <= i; j++)
        {
            while (curr % j == 0)
            {
                v[j]++;
                curr /= j;
            }
        }
        if (curr > 1)
            v[curr]++;
    }
    cout << "Case " << t << ": " << n << " = ";
    bool f = false;
    for (int i = 1; i <= n; i++)
    {
        if (v[i])
        {
            if (!f)
            {
                cout << i << " (" << v[i] << ")";
            }
            else
                cout << " * " << i << " (" << v[i] << ")";
            f = true;
        }
    }
    cout << endl;
}

int main()
{
    FAST;
    int tt;
    cin >> tt;
    for (int t = 1; t <= tt; t++)
    {
        solve(t);
    }
}