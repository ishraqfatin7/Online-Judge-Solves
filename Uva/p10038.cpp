#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve()
{
    int n;
    while (cin >> n)
    {
        vector<int> arr;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        for (int i = 1; i < arr.size(); i++)
        {
            v[i - 1] = abs(arr[i] - arr[i - 1]);
        }
        sort(v.begin(), v.end());
        bool f = true;
        for (int i = 1; i < v.size(); i++)
        {
            if (abs(v[i] - v[i - 1]) == 1)
            {
                continue;
            }
            else
                f = false;
            break;
        }
        if (f)
        {
            cout << "Jolly" << endl;
        }
        else
        {
            cout << "Not jolly" << endl;
        }

        // cin >> n;
    }
   
}

int main()
{
    solve();
}
