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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int mx = *max_element(v.begin(), v.end());
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (mx == v[i])
        {
            count++;
        }
    }
    cout << "Case " << t << ": ";
    if (count == 1)
    {
        cout << mx << endl;
    }
    else
        cout << mx + 1 << endl;
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
