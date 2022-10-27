#include <bits/stdc++.h>
using namespace std;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using ull = unsigned long long;
void solve()
{

    int n;
    while (cin >> n && n)
    {
        bool f = false;
        for (int i = 1; i < n; i++)
        {
            int y = i * i * i;
            for (int j = 1; j < n; j++)
            {
                int x = j * j * j;
                if (x - y == n)
                {
                    cout << j << " " << i << endl;
                    f = true;
                    break;
                }
            }
            if (f)
                break;
        }
        if (!f)
        {
            cout << "No solution" << endl;
        }
    }
}

int main()
{
    // int tt;
    // cin >> tt;
    // while (tt--)
    // {
    //     solve();
    // }
    solve();
}