#include<bits/stdc++.h>
using namespace std;
int main(){

    int tc;
    int mishkaCount =0, chrisCount=0,sameCount = 0;
    cin >> tc; 
    while(tc--){
        int a, b;
        cin >> a >> b;
        if(a>b && a<7 && b<7){
            mishkaCount++; 
        }
        else if (b>a && a<7 && b<7)
        {
            chrisCount++;
        }
        else if (a==b)
        {
            sameCount++;
        }
    }
    if(mishkaCount>chrisCount){
        cout << "Mishka"<<endl;
    }
    if(mishkaCount<chrisCount){
        cout << "Chris"<<endl;
    }
    if(mishkaCount == chrisCount){
       cout <<"Friendship is magic!^^"<<endl;
    }

}