#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    long long x;
    cin >> n >> x;
    long long currentIceCreams = x;
    int distress = 0;
    while (n--)
    {

        char y;
        cin >> y;

        if (y == '+')
        {
            long long z;
            cin >> z;
            currentIceCreams += z;
        }
        if (y == '-')
        {
            long long z;
            cin >> z;
            if (currentIceCreams - z < 0)
            {
                distress++;
            }
            else
            {
                currentIceCreams -= z;
            }
        }
    }
    cout << currentIceCreams <<" "<< distress << endl;
}