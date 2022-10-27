#include <bits/stdc++.h>
using namespace std; //
using ll = long long;

map<string, int> mp;
queue<string> q;
void init()
{
    string s, ss;
    int i = 1;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        s = ch;
        mp[s] = i;
        i++;
        q.push(s);
    }
    while (!q.empty())
    {
        s = q.front();
        q.pop();
        if (s.length() < 5)
        {
            for (char ch = s[s.size() - 1] + 1; ch <= 'z'; ch++)
            {
                ss = s + ch;
                mp[ss] = i++;
                q.push(ss);
            }
        }
    }
}

void solve()
{
    string s;
    while (cin >> s)
    {
        int count = 0;
        if (is_sorted(s.begin(), s.end()))
        {
            count = mp[s];
        }
        cout << count << endl;
    }
}

int main()
{
    init();
    solve();
}