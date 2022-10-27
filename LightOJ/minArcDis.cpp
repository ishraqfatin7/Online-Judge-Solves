#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265
int main()
{
    // s = r * theta;
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {

        int ox, oy, ax, ay, bx, by;
        cin >> ox >> oy >> ax >> ay >> bx >> by;
        double r = sqrt(pow((ox - ax), 2) + pow((oy - ay), 2));

        double o = sqrt(pow((ax - bx), 2) + pow((ay - by), 2));

        double theta = acos((r * r + r * r - o * o) / (2.0 * r * r));
        double s = r * theta;
        printf("Case %d: %.10lf\n", i, s);
    }
}