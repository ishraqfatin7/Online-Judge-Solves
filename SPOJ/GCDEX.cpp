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

const int N = 1e6 + 9;
vector<int> phi(N + 1, 0);
vector<ll> ans(N + 1, 0);
vector<ll>sum(N + 1, 0);
void phi_1_to_N()
{
    phi[0] = 0;
    phi[1] = 1;
    for (int i = 2; i <= N; i++)
        phi[i] = i;
    for (int i = 2; i <= N; i++)
    {
        if (phi[i] == i)
        {
            for (int j = i; j <= N; j += i)
            {
                phi[j] -= phi[j] / i;
            }
        }
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
        {
            ans[j]+=phi[j/i]*i;
        }
    }
    for (int i = 1; i <= N; i++)
    {
        ans[i]+=ans[i-1]-i;
    }

}
void solve()
{
    int x;
    while (cin >> x and x)
    {
        cout << ans[x] << endl;
    }
}

int main()
{
    FAST;
    phi_1_to_N();
    int tt;

    tt = 1;
    // cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}