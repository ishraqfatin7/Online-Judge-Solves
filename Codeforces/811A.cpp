#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n, bedH, bedM;
    cin >> n >> bedH >> bedM;
    int h, m;
    vector<int> v;
    int ans = 24 * 60 + 100;
    int time = bedH * 60 + bedM;
    for (int i = 0; i < n; i++)
    {

        cin >> h >> m;
        
        if (bedH < h || (bedH == h && bedM <= m))
        {

            int t = h * 60 + m;
            ans = min(ans, -(time - t));
        }
        else {
            h+=24;
            int t = h * 60 + m;
            ans = min(ans, -(time - t));
        }
        // h *= 60;
        // m += h;
        // m -= bedM + (bedH * 60);
        // if (m < 0)
        // {
        //     m += 24 * 60;
        // }
        // if (m == 0)
        // {
        //     cout << 0 << " " << 0 << endl;
        //     return;
        // }
        // else
        //    ans = min(ans, m);
        // //  cout << m / 60 << " " << m % 60 << endl;
    }

    cout << ans / 60 << " " << ans % 60 << endl;
};

int main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}