#include<bits/stdc++.h>
using namespace std;

int main(){

    int k,r; 
    cin >> k>>r;
    int i =0;
    int minShovels =0;
    while(++i){
        int burles = k*i;
        if(burles%10 ==0 || burles%10 ==r){
            minShovels =i;
            break;
        }
    }
   
    cout <<minShovels<<endl;

}