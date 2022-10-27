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
    int n;
    while (cin >> n and n)
    {
        string s;
        cin >> s;
        int g = s.size() / n;
        int i = 0;
        for (int i = 0; i < s.length(); i += g)
        {
            reverse(s.begin() + i, s.begin() + i + g);
        }
        cout << s << endl;
    }
}
