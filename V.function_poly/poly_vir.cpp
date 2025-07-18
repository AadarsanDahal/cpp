// • Normal Member Functions Accessed with Pointers


#include <iostream>
using namespace std;


class shape {
public:

virtual void sides (){

    cout << "Shape has undefined ...inside base class" << endl;
}

virtual ~shape() {
    cout << "Destructor called for shape" << endl;
}


};


class square :public shape  // Inheriting from shape class
{
private:
    /* data */
public:

void sides (){{
    cout << "Square has 4 sides ...inside derived class" << endl;
}
}


~square() {  
      cout << "Destructor called for square" << endl;
}

};



int main() {

    shape *p; // Pointer of base class type
  
     p= new square();
     p-> sides(); // Accessing derived class function using base class pointer

     delete p; // This will call the destructor of shape, but not square since p points to s1

       



    

    return 0;
}