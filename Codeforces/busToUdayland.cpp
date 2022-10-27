#include <bits/stdc++.h>
using namespace std;

bool f = false;
bool f1 = false;

vector<string> seats;

void solve()
{
    string s;
    cin >> s;
    int i = 0;

    if (!f)
    {
        for (i; i < s.length(); i++)
        {
            if (s[i] == 'O' && s[i + 1] == 'O')
            {
                s[i] = '+';
                s[i + 1] = '+';
                f = true;
                break;
            }
        }
    }

    seats.push_back(s);
    // cout<<s<<endl;
}

int main()
{

    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    if (f)
    {   cout<<"YES"<<endl;
        for (int i = 0; i < seats.size(); i++)
        {
            cout << seats[i] << endl;
        }
    }
    else
        cout << "NO" << endl;
}