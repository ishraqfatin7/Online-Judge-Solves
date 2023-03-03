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
    int n, k;
    cin >> n >> k;
    string s, t;
    cin >> s >> t;
    unordered_map<char, int> m1, m2;
    rep(i, n)
    {
        m1[s[i]]++;
        m2[t[i]]++;
    }
    bool f = false;
    int lim = min(n, k);
    int cnt = n;
    rep(i, lim)
    {
        if (k + 1 > cnt - i)
        {
            if (s[i] != t[i])
            {
                f = true;
                break;
            }
        }
    }
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        if (m1[ch] == m2[ch])
        {
            continue;
        }
        else
        {
            f = true;
            break;
        }
    }
    f ? cout << "NO" << endl : cout << "YES" << endl;
}

int main()
{
    FAST;
    int tt;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    tt = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}