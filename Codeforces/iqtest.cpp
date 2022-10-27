#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> num, odd, even;
    while (n--)
    {
        int x;
        cin >> x;
        num.push_back(x);
    }
    for (int i = 0; i <num.size(); i++)
    {
        if (num[i] % 2 == 0)
        {
            even.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
    }
    if (even.size() > odd.size())
    {

        for (int i = 0; i <odd.size(); i++)
        {
            cout << odd[i]+1 << endl;
            return 0;
        }
    }
    else
    {

        for (int i = 0; i < even.size(); i++)
        {
            cout << even[i]+1 << endl;
            return 0;
        }
    }
    return 0;
}
