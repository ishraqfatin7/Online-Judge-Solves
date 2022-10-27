#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve(int tt)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    // auto pr = max_element(mp.begin(), mp.end(), [](const auto &x, const auto &y)
    //                       { return x.second < y.second; });
    int mx = -1;
    for (auto x : mp)
    {
        mx = max(mx, x.second);
    }
    cout << "Case #" << tt << ": ";
    int sumMax = INT_MIN;
    priority_queue<int> pq;
    int prev = 0;
    int y = 0;
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        int sum = ((int)s[i] - 42) % (15 + mx) + 1;
        
        prev = sum;
    }

    if (y >= 28)
    {

        cout << "YES"
             << " " << y << endl;
        return;
    }
    else
        cout << "NO"
             << " " << y << endl;
}

int main()
{
    FAST;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
}