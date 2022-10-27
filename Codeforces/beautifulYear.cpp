#include <bits/stdc++.h>
using namespace std;

int checkDigit(int n)
{

    bool isFound = false;
    while (n++ && n <= 9999 && !isFound)
    {
        string numberString = to_string(n);
        set<int> uniqueDigits(numberString.begin(), numberString.end());
        if (numberString.size() == uniqueDigits.size())
        {   
            isFound= true;
            return n;
        }
       
    }
    return isFound = false;
};

int main()
{

    int number;
    cin >> number;
    cout <<checkDigit(number) <<endl;
}