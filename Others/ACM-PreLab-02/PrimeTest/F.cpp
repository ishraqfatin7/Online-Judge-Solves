#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

const int N = 1000005;
bool mark[N];
// vector<int> primes;

void sieve()
{
    // mark[2] = true;
    // mark[1] = true;
    for (int i = 2; i * i <= N; i++)
    {
        if (!mark[i])
        {
            for (ll j = i * i; j <= N; j += i)
            {
                mark[j] = true;
            }
        }
    }
    // for (int i = 2; i <= N; i++)
    // {
    //     if (!mark[i])
    //         primes.push_back(i);
    // }
}

int convert(string s)
{
    int num = 0;
    for (int i = 0; i < s.size(); i++)
    {
        num *= 10;
        num += s[i] - '0';
    }
    return num;
}

int main()
{
    FAST;
    sieve();
    string s;
    while (cin >> s)
    {
        int x = convert(s);
        reverse(s.begin(), s.end());
        int y = convert(s);

        if(mark[x]){
            cout << x << " is not prime." << endl;
        }
        else if(!mark[x]){
            if(!mark[y] && x!=y){
                cout << x << " is emirp." << endl;
            }
            else cout <<x <<" is prime."<<endl;
        }
    }
}