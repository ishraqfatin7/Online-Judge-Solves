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
    int n;
    cin >> n;

    bool f = true;
    vi a(n);
    unordered_map<int, int> cnts;
    rep(i, n)
    {
        cin >> a[i];
        cnts[a[i]]++;
        if (cnts[a[i]] > 2)
            f = false;
    }

    if (!f)
    {
        cout << "NO" << endl;
        return;
    }

    vi vis1(n + 1, -1), vis2(n + 1, -1);
    for (int i = 0; i < n; i++)
    {
        if (vis1[a[i]] >= 0)
        {
            vis2[a[i]] = i;
        }
        else
        {
            vis1[a[i]] = i;
        }
    }

    vi notvis;
    for (int x = 1; x <= n; x++)
    {
        if (cnts[x] == 0)
            notvis.push_back(x);
    }
    vector<bool> used(n + 1, false);

    vi p(n, 0), q(n, 0);

    int x = n;

    while (x)
    {

        if (cnts[x] == 0 && used[x] == false)
        {
            cout << "NO" << endl;
            return;
        }
        else if (cnts[x] == 0)
        {
            x--;
            continue;
        }
        if (cnts[x] == 1)
        {
            p[vis1[x]] = x;
            q[vis1[x]] = x;
        }
        else
        {
            int y = notvis.back();
            p[vis1[x]] = x;
            q[vis1[x]] = y;
            q[vis2[x]] = x;
            p[vis2[x]] = y;
            used[y] = true;
            notvis.pop_back();
        }
        used[x] = true;
        x--;
    }
    cout << "YES" << endl;
    rep(i, n)
    {
        cout << p[i] << " ";
    }
    cout << endl;
    rep(i, n)
    {
        cout << q[i] << " ";
    }
    cout << endl;
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