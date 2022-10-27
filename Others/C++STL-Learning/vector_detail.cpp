#include<iostream>
#include<vector>
using namespace std; 
int main()

{
    vector <int> vec;
    for (int i = 0; i < 32; i++)
    {
        vec.push_back(i);
        cout << vec.size() << " " << vec.capacity() <<endl; 
    }
    
}