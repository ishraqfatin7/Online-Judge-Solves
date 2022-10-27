#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> nums;
        int pos = 1;
        while (n)
        {
            if (n % 10)
            {
                nums.push_back(pos * (n % 10));
               
            }
             n /= 10;
                pos *= 10;
        }
        cout << nums.size() << endl;
        for (auto x : nums)
        {
            cout << x << " ";
        }
        cout<<endl;
    }
}