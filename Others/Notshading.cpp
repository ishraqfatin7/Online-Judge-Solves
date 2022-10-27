#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define rep(i, n) for (int i = 0; i < (n); i++)
void solve()
{
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    r--;
    c--;
    char arr[n+1][m+1];
    bool f = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] =='B') f = true;
        }
    }
    if (!f)
    {
        cout << -1 << '\n';
        return;
    }
    if (arr[r][c] == 'B')
    {
        cout << 0 << '\n';
        return;
    }
    bool f2 = false;
    for (int i = 0; i < n; i++)
    {
        if(arr[i][c] == 'B'){
            f2 = true; 
        }
    }
    for (int j = 0; j < m; j++)
    {
        if(arr[r][j] == 'B'){
            f2 = true;
        }
    }
    if (f2)
    {
        cout << 1 << '\n';
    }
    else
    {
        cout << 2 << '\n';
    }
}

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