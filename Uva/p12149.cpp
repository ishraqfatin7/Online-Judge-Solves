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
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += i * i;
        }
        cout << sum << endl;
    }
}
