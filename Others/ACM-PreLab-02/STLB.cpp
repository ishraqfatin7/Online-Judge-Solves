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
    int tt;

    while (cin >> tt)
    {
        if (!tt)
            return 0;
        map<vector<int>, int> m;
        for (int i = 0; i < tt; i++)
        {
            vector<int> v;
            for (int i = 0; i < 5; i++)
            {
                int x;
                cin >> x;
                v.push_back(x);
            }
            sort(v.begin(), v.end());
            m[v]++;
        }
        int mx = INT_MIN;
        int count = 0;
        for (auto it = m.begin(); it != m.end(); it++)
        {
            mx = max(mx, it->second);
        }
        for (auto it = m.begin(); it != m.end(); it++)
        {
            if (it->second == mx)
            {
                count += it->second;
            }
        }
        cout << count << endl;
        m.clear();
    }
}