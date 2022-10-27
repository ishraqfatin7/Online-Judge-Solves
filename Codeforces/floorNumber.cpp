#include<bits/stdc++.h>
using namespace std;

int main(){

    int tc;
    cin >> tc;  
    while(tc--){
        int n,x;
        cin >> n >> x;
        
        for (int i = 1; i <x; i++)
        {   
            if (n>2 )
            {
                cout << abs((n-3)/x)+2 <<endl;
                break;
            }
            cout << 1<<endl;
            break;
        }
    
    }

}