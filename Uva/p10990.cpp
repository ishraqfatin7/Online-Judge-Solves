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
const ll N = 2e6 + 9;
vector<ll> phi(N + 1, 0);
ll dp[N]; 
void phi_1_to_N()
{
    phi[0] = 0;
    phi[1] = 2;
    for (ll i = 2; i <= N; i++)
        phi[i] = i;
    for (ll i = 2; i <= N; i++)
    {
        if (phi[i] == i)
        {
            for (ll j = i; j <= N; j += i)
            {
                phi[j] -= phi[j] / i;
            }
        }
        //phi[i] = phi[i - 1] + phi[i];
    }
}
int PHI(int n)
{
    int result = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
            }
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

void solve()
{
    int l, r;
    
    cin >> l >> r;
    cout << dp[r] - dp[l - 1] << endl;
    // cout << sum << endl;
}

int main()
{
    FAST;
    int tt;
    phi_1_to_N();
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= N; i++)
    {
        dp[i] = dp[phi[i]] + 1;
    }
    for (int i = 1; i <= N; i++)
    {
        dp[i] += dp[i - 1];
    }
    tt = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}