#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = unsigned long long;

void printBinary(ull n)
{
    if (n > 1)
    {
        printBinary(n >> 1);
    }
    cout << (n & 1);
}
void solve()
{
    ull n;
    while (cin >> n and n)
    {
        ull count = __builtin_popcount(n);
        cout << "The parity of ";
        printBinary(n);
        cout << " is " << count << " (mod 2)." << endl;
    }
}

int main()
{
    // int tt;
    // cin >> tt;
    // while (tt--)
    // {
    //     solve();
    // }
    solve();
}
