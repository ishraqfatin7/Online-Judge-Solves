#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n + 1];
    vector<bool> v(m, 0);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
        int y = m + 1 - x;
        int mn = min(x,y);
        int mx = max(x,y);
        if(!v[mn]){
            v[mn] = true;
        }
        else v[mx] = true; 
    }
    for (int i = 1; i <= m; i++)
    {
        if (v[i])
        {
            cout << 'A';
        }
        else
            cout << 'B';
    }
    cout << endl;
}

int main()
{
    FAST;
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}