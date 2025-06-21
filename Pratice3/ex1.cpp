// 1. Create a class rectangle having Private attributes: length and breadth.
// a. Create a public function calc_area(). That calculates and displays area as
// l*b.
// b. In the main module, Ask for the inputs of length and breadth from user and
// store in variables.
// c. Create an object r1 using the parameterized constructor.
// d. Calculate and print the area of object r1.

#include <iostream>
using namespace std;

class rectangle
{
private:
    /* data */
    int length;
    int breadth;


public:
      rectangle(int l, int b){
       length =l;
       breadth = b;

        //  cout << "Area of rectangle: " << length * breadth << endl;

}

void calc_area (){
    cout << "Length: " << length << ", Breadth: " << breadth << endl;
    int area = length * breadth;
    cout << "Area of rectangle: " << area << endl;

}


};


int main() {
int l, b;

    cout << "Enter length and breadth of rectangle: ";
    
    cin >> l >> b;

    rectangle r1(l,b);
    r1.calc_area();
    
     
    return 0;
}