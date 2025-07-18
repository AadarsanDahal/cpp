// • Normal Member Functions Accessed with Pointers


#include <iostream>
using namespace std;


class shape {
public:

virtual void sides (){

    cout << "Shape has undefined ...inside base class" << endl;
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

};

class petagon :public shape  // Inheriting from shape class
{
private:
    /* data */
public:

void sides (){
    cout << "Petagon has 5 sides ...inside derived class" << endl;  

  
}
};

int main() {

    shape *p; // Pointer of base class type
    shape s1;
    square ss2;
    petagon p3;

     p= &s1;
     p -> sides();


     p=&ss2;
     p->sides(); // Accessing derived class function using base class pointer

        p=&p3;
        p->sides(); // Accessing another derived class function using base class pointer

    return 0;
}