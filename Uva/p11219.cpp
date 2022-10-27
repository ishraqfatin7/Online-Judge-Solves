#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve(int t)
{
    int dd, mm, yy;
    int dd1, mm1, yy1;

    char ch;
    cin >> dd >> ch >> mm >> ch >> yy;
    cin >> dd1 >> ch >> mm1 >> ch >> yy1;
    int age = 0;

    age = yy - yy1;
    if (mm1 > mm)
        age--;
    if (mm1 == mm && dd1 > dd)
        age--;

    cout << "Case #" << t << ": ";
    if (age > 130)
    {
        cout << "Check birth date" << endl;
    }
    else if (age < 0)
    {
        cout << "Invalid birth date" << endl;
        }

    else
        cout << age << endl;
}

int main()
{
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        solve(i);
    }
}
