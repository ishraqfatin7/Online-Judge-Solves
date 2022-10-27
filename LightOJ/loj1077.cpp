
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef pair<ll, ll> pii;
ll LCM(ll a, ll b)
{
    return a * b / __gcd(a, b);
}

void solve(int t)
{
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    ll g = __gcd(abs(x1 - x2), abs(y1 - y2)) + 1;
    cout << "Case " << t << ": " << g << endl;
    // cout << g << endl;
}
int main()
{
    FAST;
    int tt;
    cin >> tt;
    cin.ignore();
    for (int i = 1; i <= tt; i++)
    {
        solve(i);
    }
}