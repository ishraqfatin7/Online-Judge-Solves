#include <bits/stdc++.h>
using namespace std;

void solve(int tt)
{

    cout << "Case " << tt << ": " << endl;
    int n, m, x;
    string s;
    deque<int> d;

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> s;

        if ((s == "pushLeft" || s == "pushRight") && (d.size() >= n))
        {
            cin >> x;
            cout << "The queue is full\n";
        }
        else if ((s == "popLeft" || s == "popRight") && !d.size())
        {
            cout << "The queue is empty\n";
        }
        else if (s == "pushLeft")
        {
            cin >> x;
            d.push_front(x);
            cout << "Pushed in left: " << x << '\n';
        }
        else if (s == "pushRight")
        {
            cin >> x;
            d.push_back(x);
            cout << "Pushed in right: " << x << '\n';
        }
        else if (s == "popLeft")
        {
            x = d.front();
            d.pop_front();
            cout << "Popped from left: " << x << '\n';
        }
        else if (s == "popRight")
        {
            x = d.back();
            d.pop_back();
            cout << "Popped from right: " << x << '\n';
        }
    }
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