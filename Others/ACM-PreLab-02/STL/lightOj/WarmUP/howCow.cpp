#include <bits/stdc++.h>
using namespace std;

void solve(int tt)
{

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int m;
    cin >> m;
    cout << "Case " << tt << ":" << endl;
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        if (x > x1 && x < x2 && y > y1 && y < y2)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
}
int main()
{
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        solve(i);
    }
}