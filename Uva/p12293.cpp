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
        if ((n + 1) & (n - 1))
        {
            cout << "Alice" << endl;
        }
        else
            cout << "Bob" << endl;
    }
}
