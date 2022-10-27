#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
const int N = 5e6 + 1;
ull phi[N];
int mark[N];

void runPhiSieve()
{
    
    for (int i = 2; i <=N; i++)
    {
        phi[i] = i;
    }
    for (int i = 2; i <= N; i++)
    {
        if (!mark[i])
        {
            for (int j = i; j <= N; j += i)
            {
                mark[j] = 1;
                phi[j] = phi[j] / i * (i - 1);
            }
        }
    }
    for (ull i = 3; i < N; i++)
    {
        phi[i] *= phi[i];
        phi[i] += phi[i - 1];
    }
}

int main()
{
    runPhiSieve();
    int t;cin >> t;
    for (int i = 1; i <=t; i++){
        ull a,b;cin >> a >> b;
        cout<<"Case "<<i<<": "<<phi[b]-phi[a-1]<<"\n";
    }
    return 0;
}