#include <iostream>
using namespace std;


template <class L , class B>

B area (L l, B b){

    return l * b;
}

int main() {
     
int length= 10;
float breadth = 4.576;

cout << "Area of rectangle iss " << area (length,breadth);

    return 0;
}