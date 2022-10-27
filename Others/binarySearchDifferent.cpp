#include<bits/stdc++.h>
using namespace std; 


int anotherBinarySearch(int arr[],int number,int N){

   int L =0, R = N-1,mid;
   int ans = -1; 
   while (L<=R)
   {
       mid = L+(R-L)/2;
       if (arr[mid]>=number)
       {
           ans = mid; 
           R = mid -1;
       }
       else L = mid+1;
       return ans; 
       
   }
   

}


int main() {

    int arr[10] = {1,2,3,4,5,6,7,8,9};
    int toSearch = 5; 
    int L = 0, R = 8,mid;
    while (L<=R)
    {
        mid = L+(R-L)/2;
        if (arr[mid]== toSearch )
        {   cout << "Your target Number is at: " << mid; 
            return mid; 
        }
        if (arr[mid]<toSearch)
        {
            L= mid+1; 
        }
        else R = mid -1; 
        return -1; 
        
        
    }
   
    
}