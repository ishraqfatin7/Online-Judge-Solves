#include <bits/stdc++.h>
using namespace std;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using ull = unsigned long long;
void solve()
{
    ull x, y;
    while (cin >> x >> y)
    {
        if (!x && !y)
        {
            return;
        }
        ull rem1 = 0, rem2 = 0, sum = 0;
        ull c = 0, count = 0;
        while (x || y)
        {
            rem1 = x % 10;
            rem2 = y % 10;
            x /= 10;
            y /= 10;
            sum = rem1 + rem2 + c;
            if (sum > 9)
            {
                c = 1;
                count++;
            }
            else
                c = 0;
        }
        if (count > 1)

            cout << count << " carry operations." << endl;
        else if (count == 1)

            cout << count << " carry operation." << endl;

        if (count == 0)

            cout << "No carry operation." << endl;
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