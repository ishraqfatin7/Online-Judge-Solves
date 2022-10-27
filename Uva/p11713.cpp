#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

bool checkVowel(char ch)
{

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return true;
    }
    return false;
}

void solve(int t)
{
    string real, fake;
    cin >> real >> fake;
    bool f = false;

    if (real.size() == fake.size())
    {
        int count = 0;
        for (int i = 0; i < real.size(); i++)
        {
            if (real[i] != fake[i])
            {
                if (checkVowel(real[i]) && checkVowel(fake[i]))
                {
                    count++;
                    continue;
                }
            }
            if (real[i] == fake[i])
                count++;
        }
        if (count == real.size())
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    else
        cout << "No" << endl;
}

int main()
{
    FAST;
    int tt;
    cin >> tt;
    cin.ignore();
    for (int i = 1; i <= tt; i++)
    {
        solve(i);
    }
}
