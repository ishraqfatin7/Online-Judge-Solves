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
        vector<int> a;
        vector<int> b;
        int lower = INT_MIN;
        int index1 = 0;
        int index2 = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            if (x>lower)
            {
                lower = x;
                index1 = i;
            }
            
        }
       lower =INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
            if (x>lower)
            {
                lower = x;
                index2 = i;
            }
        }
       int max1 = *max_element(a.begin(), a.end());
       int max2 = *max_element(b.begin(), b.end());
       if (max1>max2)
       {
           for (int i = 0; i < n; i++)
           {
               if (a[i]<b[i])
               {
                   swap(a[i], b[i]);
               }
           }
        cout<< (*max_element(a.begin(), a.end()))* (*max_element(b.begin(), b.end()))<<endl;
       }
       else if(max1<max2){
            for (int i = 0; i < n; i++)
           {
               if (a[i]<b[i])
               {
                   swap(a[i], b[i]);
               }
           }
        cout<< (*max_element(a.begin(), a.end()))* (*max_element(b.begin(), b.end()))<<endl;
      
       }
       else if (max1 ==max2)
       {
             if (index1 == index2)
             {
                  cout <<max1*max2<<endl; 
             }
             else{
                 for (int i = 0; i < n; i++)
                 {
                     if (a[i]<b[i])
                     {
                         swap(a[i], b[i]);
                     }
                     
                 }
                 cout<< (*max_element(a.begin(), a.end()))* (*max_element(b.begin(), b.end()))<<endl;
             }
               
       }
       
    }
}
