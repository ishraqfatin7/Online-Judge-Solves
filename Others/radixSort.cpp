#include <bits/stdc++.h>
using namespace std;

class Box
{
private:
    int x;
    int y;
public:
    Box(int data1, int data2)
    {
        x = data1;
        y = data2;
    }
    int getX(){
        return x;
    }
    void setX(int val){
        x = val;
    }
};


class Book{
public:
    int height;
    int width;

    Book(int x, int y){
        height = x;
        width = y;
    };
    Book(){

    };
    int calculateArea(){
        return height * width;
    }

};


void sayHello(int n){
    if(n == 0){
        return; 
    }
    sayHello(n-1);
    cout<<"Hello, world!"<<n<<endl;
}

int main()
{
    Book abc = Book(10,10);
    Book abcd;
    abcd.height = 100;
    abcd.width =20; 

    int n =100; 
    int *p = &n;
    sayHello(5);
}