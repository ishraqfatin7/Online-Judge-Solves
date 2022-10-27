#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        v2.push_back(y);
    }
    int dis = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (v1[i] < v2[i])
        {
            cout << "NO" << endl;
            return;
        }
        dis = max(dis, v1[i] - v2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int x = max(v1[i] - dis, 0);
        if (x == v2[i])
        {
            continue;
        }
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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