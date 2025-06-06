#include <iostream>
using namespace std;

//Function Overloading 

int a, b;
float r,q;

int add (int , int );
float add (float , float );

int main() {
     
cout << "enter 2 numbers to add" << endl;
cin >> a >> b;

cout << "area of the a and b is " << add(a,b) << endl;



cout << "enter num to calculate radius " << endl;
cin >>r >>q;

cout << "the sum of float is " << add(r,q) << endl;

    return 0;
}


int add (int a, int b) {
    return a + b;
}


float add (float r, float q) {
    return r+q;
}