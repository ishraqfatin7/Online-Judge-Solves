#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<long long> numbers;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            numbers.push_back(x);
        }
        int count = 0;
        sort(numbers.begin(), numbers.end());
        vector<long long>result;
        if (numbers.front()==numbers.back())
        {
            cout <<n<<endl;
        }
        else{
            cout <<1<<endl;
        }
        
         

    }
}