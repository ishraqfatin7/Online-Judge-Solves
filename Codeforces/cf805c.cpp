#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N];

map<char, int> mp;

void initAlpha()
{
    char ch = 'a';
    for (int i = 1; i <= 26; i++)
    {
        mp[ch++] = i;
    }
}

void solve()
{
    string s;
    int p;
    cin >> s >> p;
    string w = s;
    sort(s.begin(), s.end());
    int sum = 0;
    string newS = "";
    int d = 0;
    map<char, int> mp2;
    for (auto x : s)
    {
        sum += mp[x];
        if (sum <= p)
        {
            mp2[x]++;
        }
        else
        {
            break;
        }
    }
    for (auto x : w)
    {
        if (mp2[x])
        {
            cout << x;
            mp2[x]--;
        }
    }
    cout << endl;
};

int main()
{

    FAST;
    initAlpha();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}