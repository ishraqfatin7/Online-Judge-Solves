#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    double a, b, c, x;
    double sum = 1;
    double zero = 0;
    cin >> a >> b >> c >> x;
    if (x == 1)
    {
        printf("%lf", sum);
        return 0;
    }
    if (x > a && x <= b)
    {
        sum = c / (b - a);
        printf("%lf", c / (b - a));
        return 0;
    }
    else
    {
        printf("%lf", zero);
        return 0;
    }
}
