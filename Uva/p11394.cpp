#include <bits/stdc++.h>
using namespace std;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using ull = unsigned long long;
void solve()
{

    int a, b, c, d, L;
    while (cin >> a >> b >> c >> d >> L)
    {
        if (!a && !b && !c && !d && !L)
        {
            break;
        }
        int count = 0;
        for (int i = 0; i <= L; i++)
        {
            int ans = a * i * i + b * i + c;
            if (ans % d == 0)
            {
                count++;
            }
        }
        cout << count << endl;
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