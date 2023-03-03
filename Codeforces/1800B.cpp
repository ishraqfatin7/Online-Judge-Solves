#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pcc = pair<char, char>;
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

bool checklower(char c)
{
    if (c >= 'a' && c <= 'z')
        return true;
    return false;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<pcc, pii> sets;
    ll cnt = 0;
    rep(i, n)
    {
        // int type1 = 'A' - 'a';
        // int type2 = 'a' - 'A';
        // pii x = {s[i], s[i] - type1};
        // pii y = {s[i] - type2, s[i]};
        // if (checklower(s[i]))
        // {
        //     sets[x].first++;
        // }
        // else
        // {
        //     sets[y].second++;
        // }
        if (checklower(s[i]))
        {
            pcc x = {s[i], s[i] - 'a' + 'A'};
            sets[x].F++;
        }
        else
        {
            pcc y = {s[i] - 'A' + 'a', s[i]};
            sets[y].S++;
        }
    }
    for (auto &i : sets)
    {
        ll a = i.S.F;
        ll b = i.S.S;
        ll curr = min(a, b);
        a -= curr;
        b -= curr;
        cnt += curr;
        ll rem = max(a, b);
        rem /= 2;
        cnt += min(rem, k);
        k -= min(rem, k);
    }
    cout << cnt << endl;
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