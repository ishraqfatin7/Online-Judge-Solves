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

ll lcm(ll a, ll b)
{
    return (a * b) / __gcd(a, b);
}

void solve()
{
    int n, q;
    cin >> n >> q;
    vi v(n+1);
    rep1(i, n) cin >> v[i];
    vi pref(n+1), suff(n+1);
    pref[1] = v[1];
    suff[n] = v[n];
    for(int i = 2; i<=n; i++)
        pref[i] = __gcd(pref[i-1], v[i]);
    for(int i = n-1; i>=1; i--){
        suff[i] = __gcd(suff[i+1], v[i]);
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        if(l == 1)
            cout << suff[r+1] << endl;
        else if(r == n)
            cout << pref[l-1] << endl;
        else
            cout << __gcd(pref[l-1], suff[r+1]) << endl;
    }
}

int main()
{
    FAST;
    int tt;
    // tt = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}