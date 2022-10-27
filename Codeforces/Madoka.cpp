#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt; //
    while (tt--)
    {
        int n;
        cin >> n;
        
        if (n & 1)
        {
            cout << 2;
            for (int i = 1; i <= n - 2; i++)
            {
                cout << i;
            }
        }
        else
        {
            cout << 1;
            for (int i = 1; i <= n - 1; i++)
            {
                cout << i;
            }
        }
        cout<<endl;
    }
}
