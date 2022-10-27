#include <bits/stdc++.h>
using namespace std;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using ll = long long;

void solve(int i)
{
    int n;
    cin >> n;
    vector<int> arr(n);

    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] & 1)
            y++;
        else
            x++;
    }
    int count = 0;
    if (y > 0)
    {
        cout << x << endl;
    }
    else
    {
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (!(arr[i] & 1))
            {
                count = 0;
                while (!(arr[i] & 1))
                {
                    count++;
                    arr[i] = arr[i] / 2;
                }

                mn = min(mn, count);
            }
        }

        cout << (mn + x - 1) << endl;
    }
}

int main()
{
    FAST;
    int tt;
    cin >> tt;
    // while (tt--)
    for (int i = 1; i <= tt; i++)
    {
        solve(i);
    }
}