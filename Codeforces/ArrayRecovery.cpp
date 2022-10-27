#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
#define rrep(i, n) for (int i = (n)-1; i >= 0; i--)
#define rrep1(i, n) for (int i = (n); i > 0; i--)
#define all_bit(x) __builtin_popcount(x)
#define nl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1), ans(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        ans[1] = v[1];
        bool f = true;
        for (int i = 2; i <= n; i++)
        {
            if (v[i] != 0 and ans[i - 1] - v[i] >= 0)
            {
                f = false;
                break;
            }
            ans[i] = ans[i - 1] + v[i];
        }
        if (!f)
        {
            cout << -1 << '\n';
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                cout << ans[i] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}