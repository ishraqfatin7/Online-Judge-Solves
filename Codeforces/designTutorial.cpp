#include<bits/stdc++.h>
using namespace std;

// bool checkPrime(int n){
//     for(int i = 2; i <n; i++){
//         if(n%i==0){
//             return false; 
//         }
//     }
//     return true; 
// }


int main(){
    int n; 
    cin >>n;
    if(n%2 ==0){
        cout<<4<<" "<<n-4<<endl;
        return 0;
    }
    cout<< n-9<<" "<<9<<endl;
}