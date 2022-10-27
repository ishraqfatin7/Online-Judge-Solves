
#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve(int t)
{

    string team, judge;
    getline(cin, team);
    getline(cin, judge);
    int f = true;
    int sum1 = 0;
    int sum2 = 0;
    string s;
    cout << "Case " << t << ": ";

    for (int i = 0; i < team.size(); i++)
    {

        if (team[i] == ' ')
        {
            continue;
        }
        else
        {
            sum1 += team[i] - '0';
            s += team[i];
        }
    }
    for (int i = 0; i < judge.size(); i++)
    {
        sum2 += judge[i] - '0';
    }

    if (team.size() == judge.size())
    {
        if (sum1 == sum2)
            cout << "Yes" << endl;
        else
        {
            cout << "Wrong Answer" << endl;
        }
    }
    else
    {
        if (sum1 == sum2)
        {
            cout << "Output Format Error" << endl;
        }
        else
            cout << "Wrong Answer" << endl;
    }
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
