#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int> &a, pair<char, int> &b)
{
    return a.second > b.second;
}
bool cmpChar(pair<char, int> &a, pair<char, int> &b)
{
    return a.first < b.first;
}

void solve()
{

    string s;
    getline(cin, s);
    // cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    map<char, int> mp;
    vector<pair<char, int>> v;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            mp[s[i]]++;
        }
    }

    for (auto x : mp)
    {
        v.push_back(make_pair(x.first, x.second));
    }
    sort(v.begin(), v.end(), cmp);

    int maxC = v[0].second;
    sort(v.begin(), v.end(), cmpChar);

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].second == maxC)
        {
            cout << v[i].first;
        }
    }
    cout << endl;
}

int main()
{

    int tt;
    cin >> tt;
    cin.ignore();
    while (tt--)
    {
        solve();
    }
}