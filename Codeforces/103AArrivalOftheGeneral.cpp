#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i <t; i++)
    {
        cin >> arr[i];
    }
    int maxValue = 0;
    int minValue = 1000;
    int minPos =0,maxPos=0; 
    for (int i = 0; i <t; i++)
    {
        if (arr[i]>maxValue)
        {
            maxValue = arr[i];
            maxPos =i;
        }
        if (arr[i]<=minValue)
        {
            minValue = arr[i];
            minPos =i;
        }
        
    }
    if (maxPos>minPos)
    {
        minPos++;
    }
    
    cout << maxPos+(t-1)-minPos << endl;
    
    
    
}