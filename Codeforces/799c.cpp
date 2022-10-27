#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve()
{
    char arr[9][9];
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            if (arr[i][j] == '#')
            {
                if (arr[i - 1][j - 1] == '#' && arr[i + 1][j + 1] == '#' && arr[i + 1][j - 1] == '#' && arr[i - 1][j + 1] == '#')
                {
                    cout << i << " " << j << endl;
                    break;
                }
            }
        }
    }
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
