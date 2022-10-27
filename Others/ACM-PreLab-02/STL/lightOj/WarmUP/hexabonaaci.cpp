#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1e4 + 10;
#define pii pair<int, int>
#define MOD 10000007
int t, a, b, c, d, e, f, n, cs = 1;
int dp[N];

int fn(int n)
{

    if (n == 0)
        return a % MOD;
    if (n == 1)
        return b % MOD;
    if (n == 2)
        return c % MOD;
    if (n == 3)
        return d % MOD;
    if (n == 4)
        return e % MOD;
    if (n == 5)
        return f % MOD;

    int &p = dp[n];
    if (p != -1)
        return p;

    p = fn(n - 1) % MOD + fn(n - 2) % MOD + fn(n - 3) % MOD + fn(n - 4) % MOD + fn(n - 5) % MOD + fn(n - 6) % MOD;
    return p;
}

int main()
{

    int t;cin >> t;
    for(int i = 1;i<=t;i++) 
    {
        cin >>a>>b>>c>>d>>e>>f>>n; 
        memset(dp, -1, sizeof(dp));
       
        cout<<"Case "<<i<<": ";
        cout<<(fn(n) + MOD) % MOD<<endl;
    }
}