#include <bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int evenArray[n];
        int countOdd =0,countEven =0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >>x;
            if (i%2 == 0 && x%2 ==1)
            {
                countOdd++;
            }
            if (i%2 == 1 && x%2 ==0)
            {
                countEven++;
            }
            
        }
        if (countOdd!=countEven)
        {
           cout <<-1<<endl;
        }
        else{
            cout<<countOdd<<endl;
        }
        
       
        
    }
}