#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    bool f =false ;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < m; i++)
        {
            char c; 
            cin >>c;
            if (c =='C'||c=='M'||c =='Y')
            {
                f = true; 
                break;
            }
            
        }
    }
    if (!f)
    {
        cout <<"#Black&White"<<endl;
    }
    else{
        cout<<"#Color"<<endl;
    }
    
    
}