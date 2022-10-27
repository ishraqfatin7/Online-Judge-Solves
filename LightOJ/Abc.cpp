#include <bits/stdc++.h>
using namespace std;

int convertToBinary(int x)
{
    int num = x;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }

    return dec_value;
}

int main()
{
    int tt;
    cin >> tt;
    for (int t = 1; t <= tt; t++)
    {
        int a, b, c, d, a1, b1, c1, d1;
        char ch;
        cin >> a >> ch >> b >> ch >> c >> ch >> d;
        cin >> a1 >> ch >> b1 >> ch >> c1 >> ch >> d1;
        cout << "Case " << t << ": ";
        if (a == convertToBinary(a1) && b == convertToBinary(b1) && c == convertToBinary(c1) && d == convertToBinary(d1))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}