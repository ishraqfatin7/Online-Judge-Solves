#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    if (n & 1)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        for (int i = 0, j = n / 2; i < n / 2; i++, j++)
        {
            v.push_back(arr[i]);
            v.push_back(arr[j]);
        }
        v.push_back(v[0]);
        v.push_back(v[1]);
        bool f = false;
        for (int i = 1; i < v.size()-1; i++)
        {
            if (v[i] > v[i - 1] && v[i] > v[i + 1])
            {
                continue;
            }
            else if (v[i] < v[i - 1] && v[i] < v[i + 1])
            {
                continue;
            }
            else
            {
                f = true;
                break;
            }
        }
        if (f)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
       
    }
};

int main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}