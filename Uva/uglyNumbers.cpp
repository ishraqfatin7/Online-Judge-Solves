#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
   
    ll arr[1501];
    ll i, pos =1, t2 =0,t3=0,t5=0; 
    arr[0] =1; 
    ll MIN;
    while(pos<1500){
        MIN = min(arr[t2]*2,min(arr[t3]*3,arr[t5]*5));
        arr[pos++] = MIN; 
        if (arr[t2]*2<=MIN)
        {
            t2++;
        }
         if (arr[t3]*3<=MIN)
        {
            t3++;
        }
         if (arr[t5]*5<=MIN)
        {
            t5++;
        }
        
    }

    
    printf("The 1500\'th ugly number is %ld.\n",arr[pos-1]);
    return 0;
    
}