#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;
    ll arr[tt];
    for (int i = 0; i < tt; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    
    bool f = false;
    for (int i = 0; i < tt - 1; i++)
    {   int v = 0;
        if (arr[i] > arr[i + 1])
        {
            int j = i + 1;
            f = true;
            while (f)
            {
                if (arr[j] > arr[j + 1])
                {
                    j++;
                    v++;
                }
                else
                {
                    f = false;
                }
            }
            count = max(v,count);
        }
    }
    cout << count << endl;
}
