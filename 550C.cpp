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
    cin >> s;
    int n = s.size();
    int ans = 0;
    int num = 0;
    rep(i, n)
    {
        int x = s[i] - '0';
        if (x % 8 == 0)
        {
            num = x;
            ans = 1;
            break;
        }
        for (int j = i + 1; j < n; j++)
        {
            int y = s[j] - '0';
            if ((x * 10 + y) % 8 == 0)
            {
                ans = 1;
                num = x * 10 + y;
                break;
            }
            for (int k = j + 1; k < n; k++)
            {
                int z = s[k] - '0';
                if ((x * 100 + y * 10 + z) % 8 == 0)
                {
                    ans = 1;
                    num = x * 100 + y * 10 + z;
                    break;
                }
            }
        }
    }
    if (ans)
    {
        cout << "YES" << endl;
        cout << num << endl;
    }

    else
        cout << "NO" << endl;
}

int main()
{
    FAST;
    int tt;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    tt = 1;
    // cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}