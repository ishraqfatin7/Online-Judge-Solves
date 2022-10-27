#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

    vector<int> data; 
    int elements; 
    int count = 0; 
    cin >> elements;
    cout << "Enter Elements: ";
    
    
    bool isPresent = false; 
    for (int i = 0; i < elements; i++)
    {
        int n;
        cin >>n;
        data.push_back(n);
    }
    cout <<"Enter the Number You Want to Find :"<<endl;
    int input; 
    cin >> input; 
    sort(data.begin(), data.end());
    
    int low = 0, high =4;
    while(low <= high){
        count++; 
        int mid = high-low/2+low; 
        if (data.at(mid)==input)
        {
            isPresent =true;
            break;
        }
        else if (data.at(mid)<input)
        {
           low = mid+1;
        }
        else{
            high = mid-1;
        }
        
    }
    if (isPresent)
    {
        cout << input <<" is Present"<<endl;
        cout <<"Iterations Completed: "<< count <<endl;
    }
    else{
        cout <<"Not Found"<<endl;
    }
    

}