#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll hc, dc, hm, dm;
        cin >> hc >> dc >> hm >> dm;
        ll k, w, a;
        cin >> k >> w >> a;
        while (k != 0)
        {
            hm -= dc;
            hc -= dm;

            if (dc < dm)
            {
                dc += w;
                k--;
            }
            if (hc < hm)
            {
                hc += a;
                k--;
            }
        }
        if (hc <= 0 && hm > 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}