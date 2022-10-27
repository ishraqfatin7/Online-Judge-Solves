
#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

map<char, int> mp;
// const int N = 1e6 + 9;
// bool mark[N];
// vector<int> primes;
// void sieve()
// {
//     mark[1] = true;
//     for (int i = 2; i * i <= N; i++)
//     {
//         if (!mark[i])
//         {
//             for (int j = i * i; j <= N; j += i)
//             {
//                 mark[j] = true;
//             }
//         }
//     }
//     for (int i = 2; i <= N; i++)
//     {
//         if (!mark[i])
//         {
//             primes.push_back(i);
//         }
//     }
// }
bool is_prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void init()
{
    int j = 27;
    int k = 1;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        mp.insert(make_pair(ch, k));
        k++;
    }
    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        mp.insert(make_pair(ch, j));
        j++;
    }
}
void solve(int t)
{
    init();
    // sieve();
    string s;

    while (getline(cin, s))
    {
        int num = 0;
        int len = s.size();
        for (int i = 0; i < len; i++)
        {
            num += mp[s[i]];
        }
        if (is_prime(num))
        {
            cout << "It is a prime word."
                 << endl;
        }
        else
        {
            cout << "It is not a prime word." << endl;
        }
    }
}

int main()
{
    FAST;
    solve(1);
    // int tt;
    // cin >> tt;
    // cin.ignore();
    // for (int i = 1; i <= tt; i++)
    // {
    //     solve(i);
    // }
}
