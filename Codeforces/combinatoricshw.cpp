#include <iostream>
#include<algorithm>

using namespace std;

long long nCr(long long n, long long r)
{

    long long a = 1, b = 1;
    if (n - r < r)
    {
        r = n - r;
    }
    if (r!=0)
    {
        while (r)
        {
            a = a*n;
            b = b*n;

            long long g = __gcd(a,b);
            a = a/g;
            b = b/g;
            n--;
            r--;
        }

    }
    else{
        a =1; 
    }
    return a;
    
}

void solve()
{

    long long int a, b, c, n;

    cin >> a >> b >> c >> n;

    if (nCr(a,b) && n!=1 >=n||nCr(b,c)>=n && n!=1 || nCr(c,a) >=n && n!=1 || n ==0 )
    {
       cout <<"Yes"<<endl;
    }
    else{
        cout <<"NO"<<endl;
    }
}

int main()
{

    unsigned int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}