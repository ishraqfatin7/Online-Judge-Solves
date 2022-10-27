#include<bits/stdc++.h>
using namespace std; 

int main(){

    int n; 
    cin >> n; 
    int implement =0; 
    while(n--){

        int a, b, c; 
        int counter = 0;
        int arr[3]; 
        for (int i = 0; i < 3; i++)
        {
            int x;
            cin >>x; 
            if (x ==1)
            {
                counter++;
            }

        }

        if (counter>1)
        {
           implement++;
        }
        
    }
    cout << implement << endl;

}