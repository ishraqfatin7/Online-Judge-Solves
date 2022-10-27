#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    ll k = n;
    ll count = 0;
    while (n >= 5)
    {
        if (n >= 5 && n < 10)
        {
            count = count + n / 5;
            n %= 5;
        }
        else if (n >= 10 && n < 20)
        {
            count = count + n / 10;
            n %= 10;
        }
        else if (n >= 20 && n < 100)
        {
            count = count + n / 20;
            n %= 20;
        }
        else if (n > 100)
        {
            count = count + n / 100;
            n %= 100;
        }
    }
    if (n > 0)
    {
        count += n;
    }
    cout << count << endl;
}