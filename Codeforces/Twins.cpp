#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> coins;
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        coins.push_back(x);
        sum += x;
    }
    int ans = 0;
    sort(coins.rbegin(), coins.rend());
    int i;
    for (i = 0; i < n; i++)
    {
        ans += coins[i];
        if (ans > sum / 2)
        {
            break;
        }
    }

    cout << i + 1 << endl;
}