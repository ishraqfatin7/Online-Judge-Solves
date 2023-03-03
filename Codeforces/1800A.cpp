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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    transform(all(s), s.begin(), ::tolower);
    int cnt = 0;
    ll i = 0;
    set<char> st;
    bool f = true;
    if (s[0] == 'm')
        while (i < n and (s[i] == 'm'))
        {
            st.insert(s[i]);
            i++;
        }
    else
    { // cout << "NO" << endl;
        f = false;
    }
    if (s[i] == 'e')
        while (i < n and (s[i] == 'e'))
        {
            st.insert(s[i]);
            i++;
        }
    else
    {
        f = false;
    }
    if (s[i] == 'o')
        while (i < n and (s[i] == 'o'))
        {
            st.insert(s[i]);
            i++;
        }
    else
    {
        f = false;
    }
    if (s[i] == 'w')
        while (i < n and (s[i] == 'w'))
        {
            st.insert(s[i]);
            i++;
        }
    else
    {
        f = false;
    }
    if (!f)
    {
        cout << "NO" << endl;
        return;
    }
    string k = "";
    for (auto x : st)
        k += x;

    if (k == "emow" and i == n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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