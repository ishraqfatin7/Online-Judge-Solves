#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
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
    int n = 8;
    // char arr[n][n];
    // for(int i = 0; i<n;i++){
    //     for(int j =0 ;j<n;j++){
    //         cin >>arr[i][j];
    //     }
    // }
    vector<string> v;
    rep(i, n)
    {
        string s;
        cin >> s;
        v.pb(s);
    }
    int rc = 0;
    int bc = 0;
    for (int i = 0; i < n; i++)
    {
        rc = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] == 'R')
            {
                rc++;
            }
        }
        if (rc == n)
        {
            cout << "R" << endl;
            return;
        }
    }

    for (int i = 0; i < n; i++)
    {
        bc = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j][i] == 'B')
            {
                bc++;
            }
        }
        if (bc == n)
        {
            cout << "B" << endl;
            return;
        }
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