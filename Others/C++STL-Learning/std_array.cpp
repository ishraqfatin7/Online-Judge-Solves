#include<iostream>
#include<array>
using namespace std;

int main()

//std array is a container that encapsulate fixed size arrays;
// arraysize needed in compile time, not traditional runtime;
// assign by value is actually by value, when passing in a function array makes a copy and the original array is untouched;

//Accessing elements--

//1. myArray.at(3); //throws out of bound exception
//2. myArray[3];
//3. myArray.data(); // gives access to the underlying array (the array that passed onto the function, inside the function)
//4. myArray.front() //gives the front element
//5. myArray.back(); //gives access to the back element or last element. 

{
    //Declaration

    array<int,5> myArray; 

    //Initialization
    array<int,5>myArray = {12,34,5,6,6}; //Intializer list
    array<int,5> myArray2 {12,34,5,6,6};//Uniform initialization

    
}