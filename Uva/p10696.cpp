#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

// int f91(int n)
// {
//     if (n >= 101)
//         return n - 10;
//     if (n <= 100)
//         return f91(f91(n + 11));
// }
void solve()
{
}

int main()
{
    FAST;
    int n;
    while (cin >> n)
    {
        if (!n)
            return 0;
        cout << "f91" << '(' << n << ')' << " = ";
        if (n >= 101)
        {
            cout << n - 10 << endl;
        }
        else
            cout << "91" << endl;
    }
}