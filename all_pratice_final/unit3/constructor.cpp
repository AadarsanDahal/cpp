//Constructorand its types

#include <iostream>
using namespace std;


class rectangle
{
private:
    /* data */
int l,b;

public:

rectangle(){ //Default constructor
    l=0;
    b=0;
}

rectangle(int x, int y){  //parameterized constructor
    l=x;
    b=y;
}

rectangle (rectangle& r){ //copy constructor
  l = r.l;
    b = r.b;
}

void area (){
    cout<<"Area is: "<<l*b<<endl;}


    ~rectangle (){
        cout<<"Destructor "<<endl;

    }
};



int main() {
     
    rectangle r; //default constructor
     r.area();

    rectangle r1(3,4); //parameterized constructor
    r1.area();

    rectangle r2(r1); //copy constructor
    r2.area();

    rectangle r3 = r1; //copy constructor
    r3.area();

    return 0;
}