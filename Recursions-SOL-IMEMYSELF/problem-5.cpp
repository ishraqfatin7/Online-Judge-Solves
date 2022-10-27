#include <bits/stdc++.h>
using namespace std;
int sum = 0; 
void poly(int x,int n)
{
    if (n == 1)
    {
        sum++;
        return; 
    }
    sum+=pow(x,n-1);
    poly(x,n-1); 
    
}

int main()
{
    int n,x;
    cin >> x>>n;
    poly(x,n);
    cout << sum << endl;
}