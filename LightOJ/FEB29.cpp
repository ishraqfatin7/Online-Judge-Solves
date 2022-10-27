#include <bits/stdc++.h>
using namespace std;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using ll = long long;
string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
map<string, int> mp;
void solve(int i)
{
    for (int i = 1; i <= 12; i++)
        mp[months[i]] = i;
    string m1, m2;
    int T, d1, d2, y1, y2;
    char ch;
    cin >> m1 >> d1 >> ch >> y1;
    cin >> m2 >> d2 >> ch >> y2;
    if (mp[m1] > 1)
        y1++;
    if (mp[m2] == 0 || (mp[m2] == 1 && d2 < 29))
        y2--;
    ll count = 0;
    count = y2 / 4 - (y1 - 1) / 4;
    count -= y2 / 100 - (y1 - 1) / 100;
    count += y2 / 400 - (y1 - 1) / 400;
    cout << "Case " << i << ": " << count << endl;
}

int main()
{
    FAST;
    int tt;
    cin >> tt;
    // while (tt--)
    for (int i = 1; i <= tt; i++)
    {
        solve(i);
    }
}