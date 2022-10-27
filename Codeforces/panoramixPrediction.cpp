#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
bool f[N];

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t,m;
    int n =1000;
    cin >> t>>m;
    vector<int> primes;
    f[1] = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (!f[i])
        {
            for (int j = i * i; j <= n; j+=i)
            {
                f[j] = true;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (!f[i])
            primes.push_back(i);
    }
    long long size = primes.size();
    for(int i = 0; i <=size ; i++){
        if (primes[i] ==t && primes[i+1] ==m)
        {
           cout<<"YES"<<endl;
           return 0; 
        }
        
    }
    cout<<"NO"<<endl;
    
}