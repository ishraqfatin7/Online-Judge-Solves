#include <bits/stdc++.h>
using namespace std;

long long int GCD2(vector<long long> &numbers, int id, int length)
{
    if (id == length - 1)
    {
        return numbers[id];
    }
    long long a = numbers[id];
    long long b = GCD2(numbers, id + 1, length);
    return __gcd(
        a, b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r, k;
        cin >> l >> r >> k;
        vector<long long int> numbers;
        for (long long i = l; i <= r; i++)
        {
            numbers.push_back(i);
        }
        int length = numbers.size();
        for (int i = 0; i < k; i++)
        {
            long long a = numbers[length - i];
            long long b = numbers[length - i + 1];
            long long product = a * b;
            remove(numbers.begin(),numbers.end(),a);
            numbers.insert(numbers.begin(), 1, product);
            
            length--;
        }
        
        long long GCD;
        for (int i = 1; i < length; i++)
        {
            long long num = numbers[0];
            GCD = __gcd(numbers[i], num);
            num =GCD;
        }
        if (GCD2(numbers,0,length) > 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}