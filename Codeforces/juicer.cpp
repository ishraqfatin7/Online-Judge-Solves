#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int n, b, d;
    cin >> n >> b >> d;
    vector<long long int> oranges;
    while (n--)
    {
        long long x;
        cin >> x;

        oranges.push_back(x);
    }

    int wasteCount = 0;
    int sum = 0;
    for (int i = 0; i < oranges.size(); i++)
    {
        if (oranges[i]>b)
        {
           continue;
        }
        
        sum += oranges[i];
        if (sum > d)
        {
             wasteCount++;
             sum =0;
        }
    }
    cout << wasteCount << endl;
}
