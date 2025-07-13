#include <iostream>
using namespace std;


class base
{
private:
    /* data */
public:
   

void showBase() {
    cout << "Base class" << endl;
}
};



class c1 : public base
{
private:
    /* data */
public:

void showC1() {
    cout << "Class c1" << endl;
}
   
};




class c2 : public base
{
private:
    /* data */
public:

void showC2() {
    cout << "Class c2" << endl;
}
   
};


int main() {


    c1 obj1;
    c2 obj2;


    obj1.showBase(); // inherited from base
    obj1.showC1();   // method from c1



    obj2.showBase(); // inherited from base
    obj2.showC2();   // method from c2
     
    return 0;
}