#include <bits/stdc++.h>
using namespace std;

int getXOR(int x, int y)
{
    return (x | y) & (~x | ~y);
}

int main()
{

    int tt;
    cin >> tt;
    while (tt--)
    {
        int l, r;
        cin >> l >> r;
        for (int i = l; i <= r; i++)
        {
            for (int j = l; j <= r; j++)
            {
                int x = getXOR(i, j);
                if (x & 1)
                {
                    cout << x << " ";
                }
            }
        }
        cout << endl;
    }
}