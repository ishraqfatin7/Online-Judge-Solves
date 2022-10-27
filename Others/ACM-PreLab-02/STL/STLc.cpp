#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n;
    while (cin >> n)
    {
        if (!n)
            return;
        queue<int> q;
        for (int i = 1; i <= n; i++)
        {
            q.push(i);
        }
        cout << "Discarded cards:";
        while (!q.empty() && q.size() > 1)
        {
            int x = q.front();
            q.pop();
            int y = q.front();
            q.pop();
            q.push(y);
            cout << " " << x;
            if (q.size() != 1)
            {
                cout << ',';
            }
        }
        cout << endl;
        cout << "Remaining card: ";
        cout << q.front() << endl;
    }
}

int main()
{
    FAST;
    solve();
}