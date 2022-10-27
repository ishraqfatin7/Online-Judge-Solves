#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t; 
    while(t--){
        int x; 
        cin >>x;
        int i;
        for (i = 1; i <=x; i++)
        {
            if (i%3==0 || i%10 ==3)
            {
                x++;
            }
        }
        cout << x<<endl;
    }
}