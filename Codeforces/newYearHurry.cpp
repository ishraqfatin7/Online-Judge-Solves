#include <bits/stdc++.h>
using namespace std;

int main()
{
    int MAX = 240, n, t, solve = 0, sum = 0;
    cin >> n >> t;
    MAX -= t;
    for (int i = 1; i <= n; i++)
    {
        sum += 5 * i;
        if (sum > MAX || solve == n)
        {
            break;
        }
        solve++; 
    }
    cout<<solve<<endl;
}