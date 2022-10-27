#include <bits/stdc++.h>
using namespace std; //

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x;
    cin >> x;
    bool notFound = false;
    for (int i = 0; i <= x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if ((i + j) == x)
            {
                cout << i + j << endl;
                break;
            }

            else
                notFound = true;
                break;
        }
    }
    if (notFound)
    {
        cout << -1 << endl;
        return 0;
    }
}