#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tt;
    cin >> tt;
    while (tt--)
    {
        int x;
        cin >> x;
        if (x % 7 == 0)
        {
            cout << x << endl;
        }
        else
        {
            int num = x / 10;
            int multiplied = num * 10;
          
            for (int i = 0; i < 9; i++)
            {
                multiplied++;
                if (multiplied % 7 == 0)
                {
                    cout << multiplied << endl;
                    break;
                }
            }
        }
    }
}