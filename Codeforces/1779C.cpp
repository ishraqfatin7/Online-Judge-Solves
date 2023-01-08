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
    ll n, m;
    cin >> n >> m;
    vll v(n + 1), v1;
    priority_queue<ll> pq, emp;
    rep1(i, n)
    {
        cin >> v[i];
        if (i <= m)
        {
            v1.pb(v[i]);
        }
    }
    v1.pb(0);
    reverse(all(v1));
    if (n == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        ll s = 0, cnt = 0;
        rep1(i, m)
        {
            s += v1[i];
            if (v1[i] > 0)
            {
                pq.push(v1[i]);
            }
            while (pq.size() && s > 0 && i != m)
            {
                ll x = pq.top();
                s -= 2 * x;
                cnt++;
                pq.pop();
            }
        }
        s = 0, m++;
        for (ll i = m; i <= n; i++)
        {
            s += v[i];
            if (v[i] < 0)
            {
                emp.push(-v[i]);
            }

            while (emp.size() && s < 0)
            {
                ll x = emp.top();
                s += 2 * x;
                emp.pop();
                cnt++;
            }
        }
        cout << cnt << endl;
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