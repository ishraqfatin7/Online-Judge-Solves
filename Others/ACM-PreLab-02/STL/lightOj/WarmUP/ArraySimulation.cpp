#include <bits/stdc++.h>
using namespace std;

void solve(int tt)
{

    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < q; i++)
    {
        char ch;
        cin >> ch;
        if (ch == 'P')
        {
            int y, z;
            cin >> y >> z;
            swap(v[y], v[z]);
        }
        else if (ch == 'S')
        {
            int x;
            cin >> x;
            for (int i = 0; i < n; i++)
            {
                v[i] += x;
            }
        }
        else if (ch == 'M')
        {
            int x;
            cin >> x;
            for (int i = 0; i < n; i++)
            {
                v[i] *= x;
            }
        }
        else if (ch == 'D')
        {
            int x;
            cin >> x;
            for (int i = 0; i < n; i++)
            {
                v[i] /= x;
            }
        }
        else if (ch == 'R')
        {
            reverse(v.begin(), v.end());
        }
    }

    cout << "Case " << tt << ": " << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {

        solve(i);
    }
}