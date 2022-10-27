#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    string s;
    cin >> s;
    set<char> ss;
    map<char, int> mp;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
        if (mp.size() > 3)
        {
            cnt++;
            mp.clear();
            mp[s[i]] = 1;
                }
    }
    if (mp.size() != 0)
    {
        cnt++;
    }
    cout << cnt << endl;
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