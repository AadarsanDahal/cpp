#include <iostream>
using namespace std;


class A
{
private:
    /* data */
public:

void display() {
cout << "Display function of class A" << endl;

}
  
};


class B : public virtual A{

};

class C : public virtual A{

};


class D: public B, public C {

};

int main() {

    A a1;
    a1.display();

    D d1;
    d1.display(); // Accessing display function of class A through class D
     
    return 0;
}