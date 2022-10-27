#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

vector<pair<string, string>> v;

void solve()
{
    string s, s1;
    getline(cin, s);
    getline(cin, s1);
    v.push_back(make_pair(s, s1));
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
    int q;

    cin >> q;
    cin.ignore();
    while (q--)
    {
        string s;
        getline(cin, s);
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].first == s)
            {
                cout << v[i].second << endl;
                break;
            }
        }
    }
}
