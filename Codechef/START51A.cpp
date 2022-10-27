#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

bool isPowerOfTwo(int x)
{
    return (x && !(x & (x - 1)));
}

map<int, int> mp;
void solve()
{
    priority_queue<int> pq;
    int n;
    cin >> n;
    int arr[n + 1];
    int ans = 0; 
    for (int i = n - 1; i >= 0; i--)
    {
        int x;
        cin >> x;
        if (x & 1)
        {
            ans^=i; 
        }
    }

    if (!ans)
    {
        cout << "CooK" << endl;
    }
    else
    {
        cout << "Chef" << endl;
    }
};

int main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}