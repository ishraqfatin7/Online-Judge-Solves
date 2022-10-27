#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve()
{
}

int main()
{
    int a, b, x, y;
    while (cin >> a >> b >> x >> y)
    {
        if (!a && !b && !x && !y)
            return 0;
        int hm1 = a * 60 + b;
        int hm2 = x * 60 + y;
        if (hm1 > hm2)
        {
            hm2 += 1440;
        }
        cout << hm2 - hm1 << endl;
    }
}
