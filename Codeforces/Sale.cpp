#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> negsets;
    int t, m;
    cin >> t >> m;
    while (t--)
    {
        int x;
        cin >> x;
        negsets.push_back(x);
    }
    int sum=0;
    sort(negsets.begin(), negsets.end());
    for (int i = 0; i < m; i++)
    {
        if (negsets[i]<=0)
        {
           sum += negsets[i];
        }
        else break;
        
    }
    cout << abs(sum) << endl;
    return 0;
    
}


// int remain = 0;
//     int sizeOfPos = possets.size();
//     int sizeOfNeg = negsets.size();
//     if (negsets.size() == m)
//     {
//         int sum = 0;
//         for (int i = 0; i < negsets.size(); i++)
//         {
//             sum += negsets[i];
//         }
//         cout << abs(sum) << endl;
//         return 0;
//     }
//     if (negsets.size() < m)
//     {
//         remain = m - negsets.size();
//         int sum = 0;
//         for (int i = 0; i < negsets.size(); i++)
//         {
//             sum += negsets[i];
//         }
//         for (int j = 0; j < remain; j++)
//         {
//             sort(possets.begin(), possets.end(), greater<int>());
//             int minValue = *min_element(possets.begin(), possets.end());
//             sum += minValue;
//             possets.pop_back();
//         }
//         cout << abs(sum) << endl;
//     }
//     if (negsets.size() > m)
//     {
//         int minValue;
//         int sum = 0;
//         sort(negsets.begin(), negsets.end(), greater<int>());
//         for (int i = 0; i < m; i++)
//         {
//             minValue = *min_element(negsets.begin(), negsets.end());
//             sum += minValue;
//             negsets.pop_back();
//         }

//         cout << abs(sum) << endl;
//     }