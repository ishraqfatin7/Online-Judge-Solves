#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve(int t)
{
    int a, b;
    cin >> a >> b;
    int sum = 0;
    cout << "Case " << t << ": ";
    for (int i = a; i <= b; i++)
        if (i & 1)
            sum += i;
    cout << sum << "\n";
}

int main()
{
    FAST;
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        solve(i);
    }
}