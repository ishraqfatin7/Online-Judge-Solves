#include<bits/stdc++.h>
using namespace std; 

int main(){
    int x; 
    cin >> x;
    int y=x;
    double sum =0;
    while(x--){
        double n;
        cin >> n;
        sum+= n/100;
    }
    std::cout << std::setprecision(4);
    std::cout << std::fixed;
    double ans = sum/y*100;
    cout << ans<<endl; 
}