

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
    // int j = 27;
    int k = 1;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        mp.insert(make_pair(ch, k));
        k++;
    }
    // for (char ch = 'A'; ch <= 'Z'; ch++)
    // {
    //     mp.insert(make_pair(ch, j));
    //     j++;
    // }
}

int calc(int sum1)
{
    int temp;
    while (sum1 >= 10)
    {
        temp = 0;
        while (sum1)
        {
            temp += sum1 % 10;
            sum1 /= 10;
        }
        sum1 = temp;
    }
    return sum1;
}
void solve(int t)
{
    init();
    // sieve();
    string a, b;

    while (getline(cin, a))

    {
        getline(cin, b);
        string s = "";
        string s1 = "";
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')
            {
                s += a[i];
            }
        }
        for (int i = 0; i < b.length(); i++)
        {
            if (b[i] >= 'a' && b[i] <= 'z' || b[i] >= 'A' && b[i] <= 'Z')
            {
                s1 += b[i];
            }
        }

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);

        int sum1(0), sum2(0);
        for (int i = 0; i < s.length(); i++)
        {
            sum1 += mp[s[i]];
        }

        for (int i = 0; i < s1.length(); i++)
        {
            sum2 += mp[s1[i]];
        }
        int x = calc(sum1);
        int y = calc(sum2);

        if (x < y)
            printf("%.2f %%\n", x * 100.0 / y);

        else
            printf("%.2f %%\n", y * 100.0 / x);
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
