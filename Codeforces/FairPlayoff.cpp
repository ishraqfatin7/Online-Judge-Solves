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
#define nl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int arr[4];
    set<int> s1;
    set<int> s2;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
        if (i < 2)
        {
            s1.insert(arr[i]);
        }
        else
        {
            s2.insert(arr[i]);
        }
    }
    sort(arr, arr + 4, greater<int>());
    int f = arr[0];
    int s = arr[1];
    if (s1.count(f) && s1.count(s))
    {
        cout << "NO" << nl;
    }
    else if (s2.count(f) && s2.count(s))
    {
        cout << "NO" << nl;
    }
    else
    {
        cout << "YES" << nl;
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