#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve()
{
}

int main()
{
    string s;
    while (getline(cin, s))
    {
        stringstream ss;
        ss << s;
        int c = 0;
        while (ss >> s)
        {
            if (c > 0)
                cout << " ";
            for (int i = s.size() - 1; i >= 0; i--)
                cout << s[i];
            c++;
        }
        cout << endl;
    }
}
