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
const int N = 1e6 + 9;
bool vis[N];

void solve()
{
    int q;
    cin >> q;
    set<pii> s;
    set<pii> s2;
    set<int> s3;
    int idx = 1;
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int x;
            cin >> x;
            s.insert({x, idx});
            s2.insert({idx, x});
            idx++;
        }
        if (type == 2)
        {
            //  cout << "From type 2: ";
            if (s2.size())
            {
                auto it = s2.begin();
                cout << it->F << ' ';
                s2.erase(it);
                if (s.find({it->S, it->F}) != s.end())
                {
                    s.erase(s.find({it->S, it->F}));
                }
            }
        }
        else if (type == 3)
        {
            // cout << "From type 3: ";
            if (s.size())
            {
                auto it = s.begin();

                cout << it->S << ' ';
                s.erase(it);
                if (s2.find({it->S, it->F}) != s2.end())
                {
                    s2.erase(s2.find({it->S, it->F}));
                }
            }
        }
    }
    cout << endl;
    // for (auto it : s2)
    // {
    //     cout << it.F << " " << it.S << endl;
    // }
    // cout << endl;
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