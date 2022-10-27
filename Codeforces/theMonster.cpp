#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long  ans =0;
    for (int i = 0; i <= 100; i++)
    {
        for (int j = 0; j <= 100; j++)
        {
            if (b + a * i == d + c * j)
            {
                if (!ans)
                    ans = b + a * i;
                else
                    ans = min(b + a * i, ans);
            }
        }
    }
    if (ans)
        cout << ans << endl;
    else
        cout << "-1"<<endl;;

};

int main()
{

    FAST;
    solve();
}