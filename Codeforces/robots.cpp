#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    queue<string> v;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push(s);
    }
    bool f = true;
    int count = -1;
    int count1 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        string ss = v.front();
        v.pop();
        for (int j = 0; j < m; j++)
        {
            if (ss[j] == 'R' && count == -1)
            {
                count = j;
            }
            if (ss[j] == 'R')
            {
                count1 = min(count1, j);
            }
        }
    }
    if (count <= count1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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