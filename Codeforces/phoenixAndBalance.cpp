#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        ll ans = pow(2,n);
        ll ans1 = 0;
        for (int i = 1; i < n; i++)
        {
            if (i < n / 2)
            {
                ans += pow(2, i);
            }
            else
            {
                ans1 += pow(2, i);
            }
        }
        cout << abs(ans - ans1) << endl;
    }
}