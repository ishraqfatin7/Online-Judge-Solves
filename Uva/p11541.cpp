#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve(int tt)
{
    string s;
    queue<char> q;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        q.push(s[i]);
    }
    cout << "Case " << tt << ": ";
    while (!q.empty())
    {
        char ch = q.front();
        q.pop();
        int len = 0;
        int count = 0;
        while (q.front() >= '0' && q.front() <= '9' && !q.empty())
        {
            len = len * 10 + q.front() - '0';
            count++;
            q.pop();
        }

        for (int i = 0; i < len; i++)
        {
            cout << ch;
        }
        // cout << len << endl;
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
