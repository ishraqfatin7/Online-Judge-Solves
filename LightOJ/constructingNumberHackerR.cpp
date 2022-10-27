#include <bits/stdc++.h>
using namespace std;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    ll sum = 0;
    while (n--)
    {
        string s;
        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {

            ll x = s[i] - '0';
            sum += x;
        }
    }
    if (sum % 3 == 0)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
}

int main()
{
    FAST;
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}