#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
}

int main()
{
    FAST;
    ll n;
    while (cin >> n)
    {

        if (!n)
            return 0;

        while (n / 10)
        {
            ll sum = 0;
            while (n)
            {
                sum += n % 10;
                n /= 10;
            }
            n = sum;
        }
        cout << n << endl;
    }
}