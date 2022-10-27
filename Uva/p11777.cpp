#include <bits/stdc++.h>
using namespace std;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve(int t)
{
    double t1, t2, final, att, ct1, ct2, ct3;
    cin >> t1 >> t2 >> final >> att >> ct1 >> ct2 >> ct3;
    double arr[3] = {ct1, ct2, ct3};
    sort(arr, arr + 3, greater<double>());
    double ctFinal = (arr[0] + arr[1]) / 2;
    // cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    double ans = t1 + t2 + final + ctFinal + att;
    cout << "Case " << t << ": ";
    if (ans >= 90)
    {
        cout << "A" << endl;
    }
    else if (ans >= 80 && ans < 90)
    {
        cout << "B" << endl;
    }
    else if (ans >= 70 && ans < 80)
    {

        cout << "C" << endl;
    }
    else if (ans >= 60 && ans < 70)
    {
        cout << "D" << endl;
    }
    else
        cout << "F" << endl;
}

int main()
{
    FAST;
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        solve(i);
    }
}