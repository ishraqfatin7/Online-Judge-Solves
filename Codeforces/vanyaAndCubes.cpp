#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

int calc(int n)
{
    int ans = (-1 + sqrt(1 + 8 * n)) / 2;
    return ans;
}

int series(int n)
{
    return n * (n + 1) / 2;
}

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n+1; i++)
    {
        sum += series(i);
        if (sum > n)
        {
            cout << i-1 << endl;
            break;
        }
    }
}