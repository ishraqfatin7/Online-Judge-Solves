#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int x, y;
    while (t--)
    {
        cin >> x >> y;

        if (x == y || x == y + 2)
            if (!(x & 1))
                cout << x + y << endl;
            else
                cout << x + y - 1 << endl;
        else
            cout << "No Number" << endl;
    }

    return 0;
}
