#include <bits/stdc++.h>
using namespace std;

void solve(int tt)
{
    int n, m, rx, ry;
    cin >> n >> m;
    cin >> rx >> ry;
    int len;
    cin >> len;
    string s;
    cin >> s;
    int x = 0, y = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'U')
        {
            y++;
        }
        else if (s[i] == 'D')
        {
            y--;
        }
        else if (s[i] == 'L')
        {
            x--;
        }
        else if (s[i] == 'R')
        {
            x++;
        }
    }
    cout << "Case " << tt << ": ";
    if (x > m || y > n || x < 0 || y < 0)
    {
        cout << "DANGER" << endl;
    }
    else if (x == rx && y == ry)
    {
        cout << "REACHED" << endl;
    }
    else
    {
        cout << "SOMEWHERE" << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
}