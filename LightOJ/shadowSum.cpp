#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve(int tt)
{
    set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (!s.count(x))
        {
            int y = x * -1;
            if (!s.count(y))
            {
                s.insert(x);
            }
            else
            {
                s.erase(y);
                s.insert(x);
            }
        }
    }
    int sum = 0;
    for (auto x : s)
    {
        sum += x;
    }
    cout << "Case " << tt << ": ";
    cout << sum << endl;
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
