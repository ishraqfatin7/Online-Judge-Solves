#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
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
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n;
    cin >> n;
    vi v(n + 2);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vi a = v;
   // sort(all(a));
    vector<pii> ans;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (a[j] > a[i])
            {
                ans.pb({j, i});
                for (int k = i; k > j; k--)
                {
                    swap(a[k], a[k - 1]);
                }
                break;
            }
        }
    }

    cout << ans.size() << endl;

    for (auto u : ans)
        cout << u.F << " " << u.S << " " << u.S - u.F << endl;
}
int main()
{
    FAST;
    int tt;
    cin >> tt;

    //   for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}