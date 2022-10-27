#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        cin >> s;
        long long res = 0;
        long long c1 = 0;
        long long c0 = 0;
        long long n = s.length();
        for (long long i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                c1++;
            }
            else
                c0++;

            if (c1 != c0)
            {
                res = min(c1, c0);
            }
        }

        cout << res << endl;
    }
}