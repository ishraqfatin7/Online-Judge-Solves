#include <bits/stdc++.h>
using namespace std; //
using ll = long long;
const int N = 1e6 + 9;

void solve()
{
    int tt;
    cin >> tt;
    cin.ignore();
    while (tt--)
    {
        cin.ignore();
        vector<int> v;
        vector<string> v1;
        map<int, string> mp;

        int n = 0;
        while (cin.peek() != '\n')
        {
            int x;
            cin >> x;
            v.push_back(x);
            n++;
        }
        for (int j = 0; j < n; j++)
        {
            string s;
            cin >> s;
            v1.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            mp[v[i]] = v1[i];
        }

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            cout << it->second << endl;
        }
        if (tt)
        {
            cout << endl;
        }
        cin.ignore();
        v.clear();
        v1.clear();
    }
}

int main()
{
    solve();
}