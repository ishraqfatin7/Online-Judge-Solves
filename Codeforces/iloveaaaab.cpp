#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    if (s.size() == 1 || s[n-1] =='A')
    {
        cout<<"NO"<<endl;
        return;
    }
    //  sort(s.begin(), s.end());
    int count = 0;
    vector<int> ac(n), bc(n);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
            count++;
        ac[i] = count;
    }
    count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'B')
            count++;
        bc[i] = count;
    }

    bool f = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            continue;
        }
        else
        {
            if (bc[i] > ac[i])
                f = true;
        }y
    }
    if (f)
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
}

int main()
{
    FAST;
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}