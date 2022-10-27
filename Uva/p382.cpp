#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    puts("PERFECTION OUTPUT");
    while (cin >> x and x)
    {
        int i, j;
        int sum = 1;
        for (i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                j = x / i;
                sum += i + j;
            }
        }
        printf("%5d  ", x);
        if (x == 1)
            puts("DEFICIENT");
        else if (sum == x)
            puts("PERFECT");
        else if (sum < x)
            puts("DEFICIENT");
        else
            puts("ABUNDANT");
    }
    puts("END OF OUTPUT");
    return 0;
}