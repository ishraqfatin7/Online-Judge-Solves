#include<iostream>

using namespace std;
long long n; 
void solve(long long n){
     
    cin >> n; 
    for (int i = 0; i*i<=n; i++)
    {
        if (n%i == 0)
        {
            if (i%2==1 && i>1)
            {
               cout <<"YES"<<endl;
            }
            else cout <<"NO"<<endl;
        }
    }
    
}


int main() {

    int t;
   
    cin >> t; 
    for (int j = 0; j < t; j++)
    {
       
        solve(n);
    }
    

}