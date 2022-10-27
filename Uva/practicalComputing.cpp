#include <bits/stdc++.h>
using namespace std;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                v[i][j] = 1;
            }
            else
            {
                v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    FAST;
    int tt;
    // cin >> tt;
    // while (tt--)
    // for (int i = 1; i <= tt; i++)
    //{
    solve();
    //}
}