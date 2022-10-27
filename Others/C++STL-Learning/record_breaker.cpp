#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,n;
    cin >>n;  
    
    int a[n+1];
    a[n] = -1;  
    for (int i = 0; i < n; i++)
    {
        cin >>a[i]; 
    }
    if (n==1)
    {
        cout << 1 <<endl;
        return 0;
    }
    int ans = 0; 
    int maxValue = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i]>maxValue && a[i]>a[i+1])
        {
            ans++; 
        }
        maxValue = max(maxValue,a[i]); 
        
    }
    cout << ans << endl;
    
    
    
}