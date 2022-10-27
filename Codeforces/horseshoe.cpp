#include<bits/stdc++.h>
using namespace std; 

int main() {

    long long int s1,s2,s3,s4;
    long long int arr[5];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    int count =0;
    sort(arr,arr+4);
    for (int i = 0; i < 3; i++)
    {
        if (arr[i]==arr[i+1])
        {
            count++;
        }
        
        
    }
    cout <<count<< endl;
    


}
