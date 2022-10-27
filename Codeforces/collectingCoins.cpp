#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int d = (a + b + c + n) / 3;
        if ((a + b + c + n) % 3 == 0 && max({a, b, c}) <= d)
        {
            cout << "YES" <<endl;
        }
        else
            cout << "NO" <<endl;
    }
}