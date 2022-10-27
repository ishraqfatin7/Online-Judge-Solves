#include <bits/stdc++.h>
using namespace std;

vector<int> apartments ={1,11,111,1111,2,22,222,2222,3,33,333,3333,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,8,88,888,8888,9,99,999,9999};

int main()
{

    int t, n; 
    string s;
    cin >> t; 
    while (t--){
        cin >>n; 
        s = to_string(n);
        int counts =0;
        int last = n%10-1;
       
        for (int i = 1; i <=s.size(); i++)
        {
            counts+=i;
        }
        cout <<last*10+counts<<endl;
        
    }

}




///With Functions
//  int t;
//     cin >> t;
//     while (t--)
//     {   int count,pressedDigits=0;
//         int x; 
//         cin>> x; 
//         for (int i = 0; i < apartments.size(); i++)
//         {
//             if (apartments[i]==x)
//             {
//                 count =i;
              
//                 break;
//             }
            
//         }
//         for (int i = 0; i <=count; i++)
//         {
//             string apartmentNumber = to_string(apartments[i]);
//             pressedDigits += apartmentNumber.length();
//         }
        
//         cout << pressedDigits <<endl;
//     }