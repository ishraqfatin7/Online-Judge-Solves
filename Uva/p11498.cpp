#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ++ NE, -+NW,--SW,+-SE;
    int n, a, b, x, y;
    cin >> n;
    while (n)
    {
        cin >> a >> b;
        while (n--)
        {
            cin >> x >> y;
            if (x > a && y > b)
            {
                cout << "NE" << endl;
            }
            if (x < a && y > b)
            {
                cout << "NO" << endl;
            }
            if (x < a && y < b)
            {
                cout << "SO" << endl;
            }
            if (x > a && y < b)
            {
                cout << "SE" << endl;
            }
            if (x == a || y == b)
            {
                cout << "divisa" << endl;
            }
            
        }
        cin >>n;
    }
}