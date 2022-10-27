#include<iostream>
#include<vector>

using namespace std; //

// vector is a sequence container and also known as dynamic array or Array list. 

// it can grow dynamically , no need to declare size at compile time.

// element Access

// at(), [],front(), back(), data()

//Modifiers

// insert(), emplace(), push_back(),emplace_back(), resize(), swap(), erase(), clear();

int main()
{
 
    vector<int> vector1; 
    vector1 = {1,2,3,4,5};

    cout << "The vector Pointer: "<< vector1.data() <<endl;

}