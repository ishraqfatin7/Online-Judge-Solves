#include <bits/stdc++.h>
using namespace std;

long long arr1[6];
long long arr2[6];

int main()
{
    long long n,m,ans;
    cin >>n>>m;
    for (int i = 1; i <= n; i++)
    {
        arr1[i%5]++;
    }
    for (int i = 1; i <= m; i++)
    {
        arr2[i%5]++;
    }
    ans = arr1[0] * arr2[0];
    for(int i = 1; i < 5; i++){
        ans+=arr1[i]*arr2[5-i];
    }
    cout << ans << endl;
}

