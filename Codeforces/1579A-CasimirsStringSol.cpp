#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
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
    string s;
    cin >> s;
    int n = s.size();
    vi v(3);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            v[0]++;
        else if (s[i] == 'B')
            v[1]++;
        else
            v[2]++;
    }
    if (v[0]+v[2]==v[1])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
}
int main()
{
    FAST;
    int tt;
    cin >> tt;

    //   for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}