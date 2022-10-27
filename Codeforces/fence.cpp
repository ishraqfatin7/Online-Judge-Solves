#include<bits/stdc++.h>
using namespace std; 

int main() {

int n,h;
cin >> n >> h;
int count = 0;
while (n--)
{
    int x; 
    cin >>x; 
    if(x<h || x ==h){
        count++;
    }
    else count+=2; 


}
cout << count << endl;


}