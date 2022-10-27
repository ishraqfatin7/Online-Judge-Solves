#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> red, blue;
    int size = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
            blue.push(s[i]);
        if (s[i] == 'R')
            red.push(s[i]);
        if(s[i]=='W'){
            size++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')
        {
            if (!red.empty() && !blue.empty())
            {
                red.pop();
                blue.pop();
                size--;
            }
            if (!red.empty() && blue.empty())
            {
                red.pop();
                size--;
            }
            if (red.empty() && !blue.empty())
            {
                blue.pop();
                size--;
            }
        }
    }
    if (size>red.size()+blue.size())
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
}
int main()
{
    FAST;
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}