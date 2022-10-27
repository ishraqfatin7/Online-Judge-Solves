#include <bits/stdc++.h>
using namespace std; //
using ll = long long;

void solve()
{
    string s;
    stack<char> op;
    getline(cin, s);
    if (s.size() == 0)
    {
        cout << "Yes" << endl;
        return;
    }
    if (s.size() == 1 || s.size() & 1)
    {
        cout << "No" << endl;
        return;
    }
    bool f = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '[')
            op.push(s[i]);

        else if (s[i] == ')' && !op.empty() && op.top() == '(')
            op.pop();

        else if (s[i] == ']' && !op.empty() && op.top() == '[')
            op.pop();
        else
            f = true;
    }
    if (op.empty() && !f)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
        
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
    }
}