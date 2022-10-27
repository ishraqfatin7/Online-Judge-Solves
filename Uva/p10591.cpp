#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n;

ll pow(ll x)
{
    ll i = n;
    ll sq = 0;
    if (x < 0)
    {
        x -= x;
    }
    ll power = 0, res = 0;
    ll temp = x;
    while (temp)
    {
        if (temp & 1)
        {
            res += (x << power);
        }
        power++;
        temp >>= 1;
    }
    return res;
}

void solve(int t)
{
    cin >> n;
    ll k = n;
    ll ans = 0;
    if (n < 10)
    {
        ans = n * n;
    }
    else
    {
        ans = n;
    }
    while (ans > 9)
    {
        ll sum = 0;
        while (ans)
        {
            ll x = ans % 10;
            sum += x * x;
            ans /= 10;
        }
        ans = sum;
    }
    cout << "Case #" << t << ": ";
    if (ans == 1)
    {
        cout << n;
        cout << " is a Happy number." << endl;
    }
    else
    {

        cout << n;
        cout << " is an Unhappy number." << endl;
    }
}

int main()
{
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        solve(i);
    }
}