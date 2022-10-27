#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    long long l, r, a, i;
    cin >> l >> r >> a;

    long long ans = (r / a) + r % a;
    long long ans2 = ((r / a) * a) - 1;
    if (ans2 < l)
    {
        cout << ans << endl;
        return; 
    }
    long long ans3 = 0;
    ans3 = (ans2 / a) + ans2 % a;
    cout << max(ans3, ans) << endl;
}
int main()
{
    int tt;
    scanf("%d", &tt);
    while (tt--)
    {
        solve();
    }
}