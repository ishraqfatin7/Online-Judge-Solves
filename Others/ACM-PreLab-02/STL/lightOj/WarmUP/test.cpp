#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    return x * x * x - 3 * x - 1;
}

void Bisection(double x0, double x1)
{
    double x2;
    int temp = 1;

    if (f(x0) * f(x1) > 0)
    {
        cout << "Incorrect initial guesses.";
    }
    else
    {
        do
        {
            x2 = (x0 + x1) / 2;
            if (f(x0) * f(x2) < 0)
            {
                x1 = x2;
            }
            else
            {
                x0 = x2;
            }

        } while (fabs(f(x2)) > 0.0001);
    }
    cout << " Root :: " << x2 << endl;
    cout << "Number Of Iteration :" << temp << endl;

    cout << " x0 :: " << x0 << endl;
    cout << " x1 :: " << x1 << endl;
    cout << " f(x0) :: " << f(x0) << endl;
    cout << " f(x1) :: " << f(x1) << endl;
    cout << " f(root) :: " << f(x2) << endl;
    temp++;
}

int main()
{

    double x0 = 1;
    double x1 = 4;

    Bisection(x0, x1);
}