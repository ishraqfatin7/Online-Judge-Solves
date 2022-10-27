#include<bits/stdc++.h>
using namespace std; 

int main() {

    int n; 
    cin >>n; 
    int totalGames = n*(n-1);
    int arr[100];
    int arr2[100];
   
    for (int i = 1; i <=totalGames; i++)
    {
        cin >> arr[i]>>arr2[i];
    }
    int count=0; 
    for (int i = 1; i <=n; i++)
    {
        for (int j=1; j <=n; j++)
        {
            if (i!=j && arr[i]==arr2[j])
            {
                count++;
            }
            
        }
        
    }
    cout << count << endl;
    

}