#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    string s;

    while (getline(cin, s))
    {
        ll len = s.length();
        list<char> l;
        list<char>::iterator it = l.begin();
        for (int i = 0; i < len; i++)
        {
            char ch = s[i];
            if (ch == '[')
            {
                it = l.begin();
            }
            else if (ch == ']')
            {
                it = l.end();
            }
            else
            {
                it = l.insert(it, ch);
                it++;
            }
        }
        for (it = l.begin(); it != l.end(); it++)
        {
            cout << *it;
        }

        cout << endl;
    }
}

int main()
{
    FAST;

    solve();
}