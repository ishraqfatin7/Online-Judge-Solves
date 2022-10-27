#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

bool cmp(char x, char y)
{
    if (x == '0' && y == '1')
    {

        return y > x;
    }
    return x > y;
}

int main()
{
    FAST;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[i] = x;
        }
        int count = 0;
        int mx = INT_MIN;
        for (int i = 1; i <= n; i++)
        {
            if (mp[i] != i)
            {
                int x = abs(mp[i] - i);
                if (i >= 1 && i <= (n - x))
                {
                    mx = max(x, mx);
                }
            }
        }
        cout << mx << endl;
    }
}