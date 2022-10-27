#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n, k;
    cin >> n;
    set<int> s;
    set<int> s2;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (!s.count(x))
        {
            s.insert(x);
        }
        else
        {
            s2.insert(x);
        }
    }
    int size = 1 + s2.size();

    cout << size << endl;
};

int main()
{

    FAST;

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}