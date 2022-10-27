#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n;
    cin >> n;
   int arr[n];
   int sum =0;

    for (int i = 0; i < n; i++)
    {
       cin >>arr[i];
       sum += arr[i];
    }
    sum -=n;
    if(sum &1){
        cout << "errorgorn" << endl;
    }
    else
       cout << "maomao90" << endl;
}

int main()
{
    FAST;
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}