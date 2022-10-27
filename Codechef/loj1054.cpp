#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e7 + 9;
ll mod = 1000000007;
int sumdiv[N + 1];
void sieve()
{

    for (int i = 1; i * i <= N; ++i)
        for (int j = i; j * j <= N; j += i)
            sumdiv[j] += i;
}
ll ipow(ll base, ll exp)
{
    ll result = 1;
    for (;;)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        if (!exp)
            break;
        base *= base;
    }

    return result;
}
void solve(int t)
{
    ll n, m;
    cin >> n >> m;
    ll ans = ipow(n, m);
    cout <<ans<<endl;
    cout << "Case " << t << ": " << sumdiv[ans] % mod << endl;
    /// cout << sumdiv[ans] % mod << endl;
}

int main()
{
    sieve();
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tt;

    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {

        solve(i);
    }
}