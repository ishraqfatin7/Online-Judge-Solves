#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n, k;
    while (cin >> n >> k)
    {
        int sum, rem, ans = n;
        while (n >= k)
        {
            sum = n / k;
            rem = n % k;
            ans += sum;
            n = sum + rem;
        }
        cout << ans << endl;
    }
}

int main()
{
    FAST;
    solve();
}