#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    // int qCount = count(all(s), 'Q');
    // int aCount = count(all(s), 'A');
    // if (qCount > aCount)
    // {
    //     cout << "No" << '\n';
    // }
    // else
    // {
    //     if (s[n - 1] == 'Q')
    //     {
    //         cout << "No" << '\n';
    //     }
    //     else
    //     {
    //         cout << "Yes" << '\n';
    //     }
    // }
    int qcnt = 0;
    int acnt = 0;
    rep(i, n)
    {
        if (s[i] == 'Q')
        {
            while (i < n && s[i] == 'Q')
            {
                qcnt++;
                i++;
            }
        }
        if (s[i] == 'A')
            qcnt--;
    }
   
    if (qcnt > 0)
    {
        cout << "No" << '\n';
    }
    else
    {
        cout << "Yes" << '\n';
    }
}

int main()
{
    FAST;
    int tt;
    tt = 1;
    cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}