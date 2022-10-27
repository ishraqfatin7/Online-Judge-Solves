#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9;
int spf[N];

int pf(int n)
{
    set<int> ans;
    int count = 0;
    vector<int> pfs;
    while (n > 1)
    {
        ans.insert(spf[n]);
        pfs.push_back(spf[n]);
        n /= spf[n];
    }
    for (auto x : pfs)
    {
        if (x == 2)
        {
            count++;
        }
    }

    if (count >= 6)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void solve(int j)
{
    int q;
    cin >> q;
    int input[2 * q];
    for (int i = 0; i < 2 * q; i++)
    {
        cin >> input[i];
    }
    int s = 0;
    for (int i = 0; i < 2 * q; i += 2)
    {
        int n = input[i + 1];
        if (n ==6)
        {
            s = 6 ; 
            q =6;
        }
        
        int c = pf(n);
        s += c;
    }
    if (s == q)
    {
        cout << "Case " << j << ": The number is both square and cube."
             << "\n";
    }
    else
    {  
        cout << "Case " << j << ": The number does not meet expectation."
             << "\n";
    }
    // for (int i = 0; i < 2*q; i+=2)
    // {
    //     cout <<input[i+1]<<" ";
    // }
    // cout<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 2; i < N; i++)
    {
        spf[i] = i;
    }
    for (int i = 2; i < N; i++)
    {
        for (int j = i; j < N; j += i)
        {
            spf[j] = min(spf[j], i);
        }
    }
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    return 0;
}