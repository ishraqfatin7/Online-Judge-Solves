#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt; //
    cin >>tt; 
    char ch1,ch2;
    char arr[302][302]; 
    for(int i =0; i<tt;i++){
        for (int j = 0; j < tt; j++)
        {
            cin >>arr[i][j];
        }
        
    }
    int count =0; 
    int count1=0;
    ch1 = arr[0][0];
    ch2 = arr[0][1];
    int i =0; 
    int j =0;
    int k =tt; 
    // while(k--){
    //     if(arr[i][j] == arr[i][tt-j-1]){
    //         i++; 
    //         j++;
    //         count++;
    //     }
    // }
    for(int i =0; i < tt; i++){
        if(arr[i][i]!=ch1||arr[tt-1-i][i]!=ch1){
            cout<<"NO"<<endl;
            return 0; 
        }
    }
    for(i = 0; i < tt; i++)
        for(j = 0; j < tt; j++)
        {
            if(i == j || tt - 1 - i == j)
                continue;
            if(arr[i][j] != ch2 || arr[i][j] == ch1)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
//     for(int i =0; i<tt;i++){
//         for (int j = 0; j < tt; j++)
//         {
//             if(arr[i][j] == ch1|| arr[i][j] == ch2 && arr[tt/2][tt/2] ==arr[0][0]){
//                 count1++;
//             }

//         }
//     }
//  if(count == tt && count1 ==(tt*tt) && ch1!=ch2){
//      cout<<"YES"<<endl;
//      return 0;
//  }
//  else{
//      cout<<"NO"<<endl;
//      return 0;
//  }
}