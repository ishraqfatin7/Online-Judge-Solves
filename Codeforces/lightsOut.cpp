#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[3][3]; 
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] ==0){
                arr[i][j] = 1;
                arr[i][j+1] =1; 
            }
        }
    }
}