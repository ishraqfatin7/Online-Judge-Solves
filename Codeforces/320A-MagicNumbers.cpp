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
    string s;
    set<char> st;
    cin >> s;
    int n = s.size();

    rep(i, n)
    {
        st.insert(s[i]);
    }
    if (st.size() > 2)
    {
        cout << "NO" << endl;
        return;
    }
    if (st.size() == 2)
    {
        if (st.find('1') != st.end() and st.find('4') != st.end())
        {
           ;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    if (s[0] != '1')
    {
        cout << "NO" << endl;
        return;
    }
    rep(i, n)
    {

        ll cnt = 0;
        if (s[i] == '4')
        {
            while (s[i] == '4' and i < n)
            {
                i++;
                cnt++;
            }
            if (cnt > 2)
            {
                cout << "NO" << endl;
                return;
            }
            // i--;
        }
        else if (s[i] == '1')
        {
            continue;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main()
{
    FAST;
    int tt;
    tt = 1;
    // cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}