#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
int main()
{
    ll n;
    while (cin >> n)
    {
        if (n < 0)
            return 0;

        cout << (n * (n + 1) / 2) + 1 << endl;
    }
}