#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void addN(int n)
{
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    vector<int> arr(n, 0);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {

            if (s.find('1', i) != string::npos)
            {
                int pos = s.find('1', i);
                cnt += pos + 1;
            }
        }
        else
        {
            if (s.find('0', i) != string::npos)
            {
                int pos = s.find('1', i);
                cnt += pos + 1;
            }
        }
    }
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
        sum += arr[j];
    }
    cout << cnt << endl;
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