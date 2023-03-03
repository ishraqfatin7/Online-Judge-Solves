#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
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
#define CLEAR(a, x) memset(a, x, sizeof(a));
#define endl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void solve()
{

    // ll n, k;
    // cin >> n >> k;
    // vector<ll> prime(k);
    // rep(i, k)
    // {
    //     cin >> prime[i];
    // }
    // ll ans = 0;
    // ll l = 1, r = n;
    // for (ll mask = 1; (mask < 1 << k); ++mask)
    // {
    //     ll prod = 1;
    //     for (ll i = 0; i < k; ++i)
    //     {
    //         if (mask & 1 << i)
    //             prod *= prime[i];
    //     }
    //     ll here = r / prod;
    //     if (__builtin_parity(mask))
    //         ans += here;
    //     else
    //         ans -= here;
    // }
    // cout << ans << endl;
    ll n, k;
    cin >> n >> k;
    vll prime(k);
    rep(i, k)
    {
        cin >> prime[i];
    }
    ll ans = 0;
    for (ll i = 1; i < (1 << k); i++)
    {
        ll prod = n; 

        for (ll j = 0; j < k; j++)
        {
            if (i & (1 << j))
            {
                prod /= prime[j];
            }
        }
        //ll here = n / prod;
        if (__builtin_parity(i))
        {
            ans += prod;
        }
        else
        {
            ans -= prod;
        }
    }
    cout << ans << endl;
}

int main()
{
    FAST;
    int tt;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    tt = 1;
    // cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}
