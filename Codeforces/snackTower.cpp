#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, x;
    cin >> n;
    int mx = n;
    int i = 0;
    set<int> snacks;
    while (i < n)
    {
        cin >> x;
        snacks.insert(x);
        if (x == mx)
        {
            if (x == mx)
                while (snacks.count(mx))
                    cout << mx << ' ', mx--;
         
        }
           cout << endl;
        i++;
    }
}