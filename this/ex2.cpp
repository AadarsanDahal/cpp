//WAP to illustrate the use of abstract base class  and find the perimeter of sq 



#include <iostream>
using namespace std;

class shape {

    public:
    float length;
    float width;

    void set_dimensions(float length, float width) {
        this -> length = length;
        this -> width = width;

    }
    
   virtual float perimeter() = 0; // Pure virtual function to make this class abstract
};


class square : public shape {

   public:

    void perimeter() {
       cout <<"the value of perimeter is " << 2(this -> length * this->width)  // Perimeter of square is 4 times the side
    } 

    
};





int main() {


    square s1;
    s1.set_dimensions(5.0, 5.0); // Setting dimensions, though not used in square
    

     
    return 0;
}