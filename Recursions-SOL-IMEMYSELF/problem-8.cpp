#include <bits/stdc++.h>
using namespace std;
int sum = 0;
int k;
bool isprime(int n,int k)
{

    if (k < n - 1)
    {
        if(n % k == 0)
        {
            return false;
        }
        isprime(n,k+1); 
    }
    return true;
}

int main()
{
    int n, x;
    cin >> n;
    k = 2;
    bool f = isprime(n, k);
    f?cout<<"Prime":cout<<"Not Prime";
}