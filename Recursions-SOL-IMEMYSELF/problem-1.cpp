#include<bits/stdc++.h>
using namespace std;

int arr[5] = {69,87,45,21,47};

void reversePrint(int n){

    if (n>=0)
    {
       cout << arr[n]<< " ";
       reversePrint(n-1);
       
    }
    

}

int main(){

reversePrint(4);

}