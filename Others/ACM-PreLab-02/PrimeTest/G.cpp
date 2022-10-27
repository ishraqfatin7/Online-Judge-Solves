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

int lcm(int a, int b)
{
    return a * b / __gcd(a, b);
}
int main()
{
    FAST;
    int n;

    while (cin >> n and n)
    {
        vector<int> v;
        int x;
        v.push_back(n);
        while (cin >> x and x)
        {
            v.push_back(x);
        }
        int ans = v.front();
        for (auto i : v)
        {
            ans = lcm(ans, i);
        }
        cout << ans << endl;
    }
}
