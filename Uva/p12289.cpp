#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve()
{
}

int main()
{

    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;
        int count = 0;
        string one = "one";
        if (s.length() == 5)
        {
            cout << 3 << endl;
        }
        else if (s.length() == 3)
        {
            for (int i = 0; i < 3; i++)
            {
                if (s[i] == one[i])
                {
                    count++;
                }
            }
            if (count >= 2)
            {
                cout << 1 << endl;
            }
            else
                cout << 2 << endl;
        }
    }
}
