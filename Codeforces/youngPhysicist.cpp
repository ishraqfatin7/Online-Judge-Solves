#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tt;
    cin >> tt;
    int sumx = 0, sumy = 0, sumz = 0;
    while (tt--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        sumx += x;
        sumy += y;
        sumz += z;
    }

    if (!sumx && !sumy && !sumz)
    {
        cout << "YES" << endl;
        return 0;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}