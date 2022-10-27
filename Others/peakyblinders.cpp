#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define rep(i, n) for (int i = 0; i < (n); i++)

bool cmp(pair<string, int> &a,
         pair<string, int> &b)
{
    return a.second > b.second;
}

void sort(map<string, int> &M)
{

    vector<pair<string, int>> v;

    for (auto &it : M)
    {
        v.push_back(it);
    }

    sort(v.begin(), v.end(), cmp);

    for (auto &it : v)
    {

        cout << it.first << endl;
    }
}

void solve()
{
    int n;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        string s;
        cin >> s >> x;

        mp.insert(make_pair(s, x));
    }
    sort(mp);
    
}

int main()
{
    FAST;
    // sieve();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}