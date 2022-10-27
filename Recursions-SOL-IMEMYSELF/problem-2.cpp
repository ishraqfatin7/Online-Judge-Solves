#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int i, int j)
{

    if (i<=j)
    {
        cout << arr[i] << " " <<arr[j]<<endl;
        printArray(arr,i+1,j-1);
        
    }
}

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   printArray(arr, 0, n-1);
   //printArrayLoop(arr, 0, n - 1);
}