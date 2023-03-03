#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define vi vector<int>

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int i = 0, flag = 0;
        int nDigits[10];
        while (n)
        {
            nDigits[i++] = n % 10;
            n /= 10;
        }
        vi a(10), b(10);
        rep(j, 0, i)
        {
            if (nDigits[j] & 1)
            {
                a[j] = nDigits[j] / 2 + flag;
                b[j] = nDigits[j] / 2 + 1 - flag;
                flag = 1 - flag;
            }
            else
                a[j] = b[j] = nDigits[j] / 2;
        }
        int x = 0, y = 0, m = 1;
        rep(j, 0, i)
        {
            y += b[j] * m, x += a[j] * m;
            m *= 10;
        }
        cout << x << ' ' << y << '\n';
    }
    return 0;
}