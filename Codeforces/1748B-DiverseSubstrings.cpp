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
    string s;
    cin >> s;
    // unordered_map<char, int> m;
    set<int> st;
    rep(i, n)
    {
        st.insert(s[i]);
    }
    ll ans = 0;
    int mx = -1;
    rep(i, n)
    {
        vector<int> freq(10);
        priority_queue<int> pq;
        int unq = 0;
        int tot = 255 + i;
        tot = min(tot, n);
        for (int j = i; j < tot; j++)
        {
            int num = s[j] - '0';
            if (!freq[num])
            {
                unq++;
            }
            freq[num]++;
            pq.push(freq[num]);
            if (pq.top() <= unq)
            {
                ans++;
            }
        }
    }

    cout << ans << endl;
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