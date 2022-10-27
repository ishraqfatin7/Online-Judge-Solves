#include <bits/stdc++.h>
using namespace std;

void solve(int t)
{
    int n;
    cin >> n;
    map<string, int> mp;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        int l, w, h;
        cin >> s >> l >> w >> h;
        int vol = l * w * h;
        mp[s] = vol;
        sum += vol;
    }
    int avg = sum / n;
    string thief;
    string victim;
    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->second << " ";
    // }
    bool f = false;
    for (auto x : mp)
    {
        if (x.second > avg)
        {
            thief = x.first;
            f = true;
        }
        if (x.second < avg)
        {
            victim = x.first;
            f = true;
        }
    }
    cout << "Case " << t << ": ";
    if (f)
    {
        cout << thief << " took chocolate from " << victim << endl;
    }
    else
        cout << "no thief" << endl;
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