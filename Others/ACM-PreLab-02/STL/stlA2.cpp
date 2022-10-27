#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int t;
    while (cin >> t and t)
    {
        int x;
        while (cin >> x and x)
        {

            queue<int> q;
            stack<int> s;
            q.push(x);
            for (int i = 1; i < t; i++)
            {
                cin >> x;
                q.push(x);
            }
            for (int i = 1; i <= t; i++)
            {
                s.push(i);
                while (!s.empty() && s.top() == q.front())
                {
                    q.pop();
                    s.pop();
                }
            }
            if (s.empty())
            {
                cout << "Yes" << endl;
            }
            else
                cout << "No" << endl;
        }
        cout << endl;
    }
}

int main()
{
    FAST;
    solve();
}