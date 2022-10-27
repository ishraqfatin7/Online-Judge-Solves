#include <bits/stdc++.h>
using namespace std;
int sum = 1;
int fact(int n)
{
    if (n == 1)
        return 0;
    sum *= n;
    fact(n - 1);
    return 0;
}
int fib = 0;
int fibo(int n)
{
    if (n<3)
        return 1;
    
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n, x;
    cin >> n;
    fact(n);
    fib = fibo(n);
    cout << fib << endl;
    cout << sum << endl;
}