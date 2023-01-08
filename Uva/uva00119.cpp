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
    bool f = 1;
    while (cin >> n)
    {
        // cout << n << endl;
        map<string, int> m;
        vector<string> v(n);
        rep(i, n)
        {
            // string s;
            cin >> v[i];

            m[v[i]] = 0;
            // cout << s << ' ';
        }
        cout << endl;
        rep(j, n)
        {
            string s;
            int x, y;
            cin >> s >> x >> y;
            int toGive;
            int rem;
            if (!y)
            {
                continue;
            }
            toGive = x / y;
            m[s] -= y * toGive;
            // cout << s <<" "<< x <<" "<<y;
            rep(i, y)
            {
                cin >> s;
                m[s] += toGive;
                // cout << s <<" ";
            }
        }
        if (f)
        {
            // cout << endl;
            f = false;
        }
        else
            cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << v[i]
                 << " "
                 << m[v[i]];
            if (i != n - 1)
            {
                cout << endl;
            }
        }
    }
}

int main()
{
    FAST;
    int tt;
    tt = 1;
    // cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}