// ‘Peter should buy books whose prices are i and
//     j.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int m;
        cin >> m;
        vector<pair<int, int>> v;
        int x, y, d;
        int ans1 = 0, ans2 = 0;
        int minc = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                x = arr[i];
                y = arr[j];
                d = (abs(x - y));
                if (d < minc && x + y == m)

                {

                    ans1 = x;

                    ans2 = y;

                    minc = d;
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n", ans1, ans2);
    }
}